#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <windows.h>

#define BOLD "\e[1m"
#define WHITE "\e[0;37m"
#define RED "\e[0;31m"
#define YELLOW "\033[33m"
#define BLUE "\e[0;34m"
#define GREEN "\e[0;32m"

int accountsCount;

struct Account {
    char username[20];
    char password[15];
};

struct product {
    int ID;
    char name[20];
    int quantity;
    float price;
};

struct reportData {
    char name[20];
    int qty;
    float price;
    unsigned int ordersPlaced;
};

// Function Prototypes
void enter(int, const char *);
void menu(int);
void addInventory();
void removeInventory();
void viewInventory();
float addToCart(int, float);
int removeFromCart(float *);
void genReport(int);

// Implementations from Talal's file (Inventory Management)
void addInventory() {                                         
    FILE *file = fopen("inventory.txt", "a");
    if (!file) {
        printf("Error opening inventory.\n");
        return;
    }

    // Check if the file is empty to add default products
    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    if (fileSize == 0) {
        printf("File is empty. Adding default products...\n");

        struct product prod[15] = {
            {100, "Bread", 100, 2},
            {101, "Milk", 50, 1},
            {102, "Eggs", 30, 3},
            {103, "Rice", 20, 10},
            {104, "Sugar", 20, 3},
            {105, "Cooking Oil", 25, 5},
            {106, "Salt", 50, 1},
            {107, "Tomatoes", 30, 2},
            {108, "Potatoes", 40, 1},
            {109, "Onions", 30, 1},
            {110, "Canned Beans", 20, 2},
            {111, "Toilet Paper", 40, 1},
            {112, "Dishwashing Liquid", 15, 2},
            {113, "Shampoo", 20, 3},
            {114, "Toothpaste", 25, 1}
        };

        for (int i = 0; i < 15; i++) {
            fprintf(file, "%d %s %d %d\n", prod[i].ID, prod[i].name, prod[i].quantity, prod[i].price);
        }

        printf("Default products added to inventory.\n");
    }

    struct product prod;
    printf("Enter product name to add: ");
    scanf("%s", prod.name);
    printf("Enter product quantity: ");
    scanf("%d", &prod.quantity);
    printf("Enter product price: ");
    scanf("%d", &prod.price);

    // Assign product ID based on last added product
    fseek(file, -1, SEEK_END);
    while (fscanf(file, "%d %s %d %d", &prod.ID, prod.name, &prod.quantity, &prod.price) != EOF);
    prod.ID += 1;

    fprintf(file, "%d %s %d %d\n", prod.ID, prod.name, prod.quantity, prod.price);
    printf("Product added successfully.\n");

    fclose(file);
}

void removeInventory() {                                          
    int id;
    printf("Enter product ID to remove: ");
    scanf("%d", &id);

    FILE *file = fopen("inventory.txt", "r");
    if (!file) {
        printf("Error opening inventory.\n");
        return;
    }

    FILE *temp = fopen("temp.txt", "w");
    if (!temp) {
        printf("Error opening temporary file.\n");
        fclose(file);
        return;
    }

    struct product prod;
    int found = 0;
    while (fscanf(file, "%d %s %d %d", &prod.ID, prod.name, &prod.quantity, &prod.price) != EOF) {
        if (prod.ID != id) {
            fprintf(temp, "%d %s %d %d\n", prod.ID, prod.name, prod.quantity, prod.price);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(temp);

    if (found) {
        remove("inventory.txt");
        rename("temp.txt", "inventory.txt");
        printf("Product removed successfully.\n");
    } else {
        remove("temp.txt");
        printf("Product ID not found.\n");
    }
}

void viewInventory() {                                
    FILE *file = fopen("inventory.txt", "r");
    if (!file) {
        printf("Error opening inventory.\n");
        return;
    }

    struct product prod;
    printf("\nProduct Inventory:\n");
    while (fscanf(file, "%d %s %d %d", &prod.ID, prod.name, &prod.quantity, &prod.price) != EOF) {
        printf("%d %s - Quantity: %d - Price: %d\n", prod.ID, prod.name, prod.quantity, prod.price);
    }

    fclose(file);
}

// Implementation from Mujtaba's file (Cart Management)
float addToCart(int n, float totalCost) {                            
    FILE *db = fopen("inventory.txt", "r");
    if(db == NULL) {
        printf("\nError opening file");
        return 0;
    }
    
    struct product *cart = NULL;
    int count = n; 

    while(1) {
        cart = (struct product *)realloc(cart,(count + 1) * sizeof(struct product));
        if(cart == NULL) {
            printf("Memory Allocation Failed!\n");
            fclose(db);
            return 0;
        }

        printf("\nEnter the name of the item (or type 'exit' to finish): ");
        scanf("%s", cart[count].name);

        if(strcmp(cart[count].name, "exit") == 0) {
            break;
        }

        printf("Enter Quantity: ");
        scanf("%d", &cart[count].quantity);
        
        fseek(db, 0, SEEK_SET);
                
        int found = 0;
        char productName[30];

        while(fgets(productName, 30, db) != NULL) {
            int available;
            float price;
        	        	
            sscanf(productName, "%*d %s %d %f", productName, &available, &price);
        	
            printf("\nPrice: %.2f\n", price);
            printf("Available: %d\n", available);
        	
            if(strcmp(productName, cart[count].name) == 0) {
                found = 1;
                if(available <= 0) {
                    printf("\nThis item is out of stock");
                    continue;
                } else if(available < cart[count].quantity) {
                    printf("\nThere are only %d %s in the stock", available, productName);
                    continue;
                }
                printf("\nAdded to cart successfully!\n");

                cart[count].price = price;
                totalCost += cart[count].quantity * price;
                printf("\n\nTotal Cost: %f\n", totalCost);

                FILE *orderHistory = fopen("order_history.txt", "a");
                if(orderHistory == NULL) {
                    printf("\nError opening order history file");
                    free(cart);
                    fclose(db);
                    return 0;
                }
                fprintf(orderHistory, "%s\tQuantity: %d\tPrice: $%.2f\n", cart[count].name, cart[count].quantity, price);
                fclose(orderHistory);
                break;
            }
        }
        if(found != 1) {
            printf("\nThe item does not exist!");
        } else {
            count++;
        }
    }

    free(cart);
    fclose(db);

    printf("\nThe total cost of your cart is: $%.2f\n", totalCost);
    n = count;
    return totalCost;
}

int removeFromCart(float *totalCost) {
    char itemToRemove[30];
    int removeQuantity;

    printf("\nEnter the name of the item to remove: ");
    scanf("%s", itemToRemove);

    printf("\nEnter the quantity to remove: ");
    scanf("%d", &removeQuantity);
   
    FILE *orderHistory = fopen("order_history.txt", "r");
    FILE *tempFile = fopen("temp_order_history.txt", "w");
    if(orderHistory == NULL || tempFile == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    char *productName = (char *)malloc(100 * sizeof(char));  
    if (productName == NULL) {
        printf("Memory Allocation Failed for itemName!\n");
        fclose(orderHistory);
        fclose(tempFile);
        return 0;
    }

    char *line = (char *)malloc(100 * sizeof(char));
    if (line == NULL) {
        printf("Memory Allocation Failed for line!\n");
        free(productName);
        fclose(orderHistory);
        fclose(tempFile);
        return 0;
    }

    int found = 0;

    while(fgets(line, 100, orderHistory) != NULL) {
        int itemQuantity;
        float itemPrice;

        sscanf(line, "%s Quantity: %d Price: $%f", productName, &itemQuantity, &itemPrice);

        if(strcmp(productName, itemToRemove) == 0) {
            found = 1;
            if(removeQuantity >= itemQuantity) {
                printf("\nRemoved all %s from the cart.\n", productName);
                *totalCost -= itemQuantity * itemPrice;
            } else {
                printf("\nRemoved %d of %s from the cart.\n", removeQuantity, productName);
                *totalCost -= removeQuantity * itemPrice;
                itemQuantity -= removeQuantity;
                fprintf(tempFile, "%s\tQuantity: %d\tPrice: $%.2f\n", productName, itemQuantity, itemPrice);
            }
        } else {
            fprintf(tempFile, "%s", line);
        }
    }

    fclose(orderHistory);
    fclose(tempFile);

    remove("order_history.txt");
    rename("temp_order_history.txt", "order_history.txt");

    if(!found) {
        printf("Item not found in the cart.\n");
    }
    printf("\nUpdated total cost: $%.2f\n", *totalCost);

    free(productName);
    free(line);
    return 0;
}

// Updating menu function with new implementations
void menu(int userType) {
    int option;
    float totalCost = 0;

    if(userType == 1) { // 1 for Admin
        while(1) {
            printf("\nWhat would you like to do now:\n");
            printf("\n 1) Add New Item to Stock\n 2) View Stock Status\n 3) Remove Item from Stock\n 4) Generate Report\n 5) LogOut\n 6) Exit Program & LogOut\n");
            scanf("%d", &option);
            
            switch(option) {
                case 1:
                    addInventory();
                    break;
                case 2:
                    viewInventory();
                    break; 
                case 3:
                    removeInventory();
                    break;
                case 4:
                    genReport(10); // Assuming 10 is the number of items
                    break;
                case 5:
                    return;
                case 6:
                    exit(0);
                default:
                    printf(RED "\n\tInvalid Input!! Try Again\n" WHITE);
            }
        }
    } else if(userType == 2) { // 2 for User
        while(1) {
            printf("\nWhat would you like to do now:\n");
            printf("\n 1) Add Item to Cart\n 2) Remove Item from Cart\n 3) Place Order\n 4) LogOut\n 5) Exit Program & Logout\n");
            scanf("%d", &option);
            
            switch(option) {
                case 1:
                    totalCost = addToCart(0, totalCost);
                    break;
                case 2:
                    removeFromCart(&totalCost);
                    break; 
                case 3:
                    printf("\nOrder placed! Total cost: $%.2f\n", totalCost);
                    totalCost = 0;
                    break;
                case 4:
                    return;
                case 5:
                    exit(0);
                default:
                    system("CLS");
                    printf(RED "\n\tInvalid Input!! Try Again\n" WHITE);
            }
        }
    }
}

// Rest of the original code from paste-1.txt remains the same
// Main function, enter function etc.

// Added placeholder for genReport since it was incomplete in the original code
void genReport(int noOfItems) {
    int DD, MM, YYYY;
    printf("Enter current Date (Format: DD MM YYYY): ");
    scanf("%d %d %d", &DD, &MM, &YYYY);

    printf("\n\n\t\tReport Generated on Date: %d/%d/%d\n", DD, MM, YYYY);
    
    // Placeholder report generation
    printf("\n****************** Sales ******************\n");
    printf("-------------------------------------------\n");
    printf(" S.No.\tItems\tSold Qty\tPrice\n");
    
    // In a real implementation, you would read from sales/inventory files
    printf("1\tMilk\t10\t$1\n");
    printf("2\tBread\t15\t$2\n");
    
    printf("-------------------------------------------\n");

    printf("\n****************** Stock Level ******************\n");
    printf("-------------------------------------------\n");
    printf(" S.No.\tItems\tRemaining Qty\tPrice\n");
    
    // In a real implementation, you would read from inventory file
    printf("1\tMilk\t50\t$1\n");
    printf("2\tBread\t100\t$2\n");
    
    printf("-------------------------------------------\n");
}