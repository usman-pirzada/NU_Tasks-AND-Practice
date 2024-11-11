#include<stdio.h>

int main() {

    int quantity1, quantity2, quantity3, quantity4, value1, value2, value3, value4, no_of_type;
    char snack1, snack2, snack3, snack4;
    printf("\t\tZaitoon Restaurant\t\t\nWelcome\nB=Burger\nF=French Fries\nS=Sandwiches\nP=Pizza\n");
    printf("How many types of snacks do you need to order: \n");
    scanf("%d", &no_of_type);

    switch (no_of_type)
    {
        case 1:
            printf("Please enter the first snack you want to order: \n");
            scanf(" %c", &snack1); 
            printf("Please enter the quantity: \n");
            scanf("%d", &quantity1);
            switch(snack1){
                case 'P':
                    value1 = 500;
                    break;
                case 'B':
                    value1 = 200;
                    break;
                case 'S':
                    value1 = 150;
                    break;
                case 'F':
                    value1 = 50;
                    break;
                default:
                    printf("Invalid snack type.\n");
                    return 1;
            }
            printf("%d %c value %d\n",quantity1,snack1,value1*quantity1);
            break;

        case 2:
            printf("Please enter the first snack you want to order: \n");
            scanf(" %c", &snack1);
            printf("Please enter the quantity: \n");
            scanf("%d", &quantity1);
            switch(snack1){
                case 'P':
                    value1 = 500;
                    break;
                case 'B':
                    value1 = 200;
                    break;
                case 'S':
                    value1 = 150;
                    break;
                case 'F':
                    value1 = 50;
                    break;
                default:
                    printf("Invalid snack type.\n");
                    return 1;
            }
            printf("Please enter the second snack you want to order: \n");
            scanf(" %c", &snack2);
            printf("Please enter the quantity: \n");
            scanf("%d", &quantity2);
            switch(snack2){
                case 'P':
                    value2 = 500;
                    break;
                case 'B':
                    value2 = 200;
                    break;
                case 'S':
                    value2 = 150;
                    break;
                case 'F':
                    value2 = 50;
                    break;
                default:
                    printf("Invalid snack type.\n");
                    return 1;
            }
            printf("%d %c value %d\n",quantity1,snack1,value1*quantity1);
            printf("%d %c value %d\n",quantity2,snack2,value2*quantity2);
            break;

        case 3:
            printf("Please enter the first snack you want to order: \n");
            scanf(" %c", &snack1);
            printf("Please enter the quantity: \n");
            scanf("%d", &quantity1);
            switch(snack1){
                case 'P':
                    value1 = 500;
                    break;
                case 'B':
                    value1 = 200;
                    break;
                case 'S':
                    value1 = 150;
                    break;
                case 'F':
                    value1 = 50;
                    break;
                default:
                    printf("Invalid snack type.\n");
                    return 1;
            }
            printf("Please enter the second snack you want to order: \n");
            scanf(" %c", &snack2);
            printf("Please enter the quantity: \n");
            scanf("%d", &quantity2);
            switch(snack2){
                case 'P':
                    value2 = 500;
                    break;
                case 'B':
                    value2 = 200;
                    break;
                case 'S':
                    value2 = 150;
                    break;
                case 'F':
                    value2 = 50;
                    break;
                default:
                    printf("Invalid snack type.\n");
                    return 1;
            }
            printf("Please enter the third snack you want to order: \n");
            scanf(" %c", &snack3);
            printf("Please enter the quantity: \n");
            scanf("%d", &quantity3);
            switch(snack3){
                case 'P':
                    value3 = 500;
                    break;
                case 'B':
                    value3 = 200;
                    break;
                case 'S':
                    value3 = 150;
                    break;
                case 'F':
                    value3 = 50;
                    break;
                default:
                    printf("Invalid snack type.\n");
                    return 1;
            }
            printf("%d %c value %d\n",quantity1,snack1,value1*quantity1);
            printf("%d %c value %d\n",quantity2,snack2,value2*quantity2);
            printf("%d %c value %d\n",quantity3,snack3,value3*quantity3);
            break;

        case 4:
            printf("Please enter the first snack you want to order: \n");
            scanf(" %c", &snack1);
            printf("Please enter the quantity: \n");
            scanf("%d", &quantity1);
            switch(snack1){
                case 'P':
                    value1 = 500;
                    break;
                case 'B':
                    value1 = 200;
                    break;
                case 'S':
                    value1 = 150;
                    break;
                case 'F':
                    value1 = 50;
                    break;
                default:
                    printf("Invalid snack type.\n");
                    return 1;
            }
            printf("Please enter the second snack you want to order: \n");
            scanf(" %c", &snack2);
            printf("Please enter the quantity: \n");
            scanf("%d", &quantity2);
            switch(snack2){
                case 'P':
                    value2 = 500;
                    break;
                case 'B':
                    value2 = 200;
                    break;
                case 'S':
                    value2 = 150;
                    break;
                case 'F':
                    value2 = 50;
                    break;
                default:
                    printf("Invalid snack type.\n");
                    return 1;
            }
            printf("Please enter the third snack you want to order: \n");
            scanf(" %c", &snack3);
            printf("Please enter the quantity: \n");
            scanf("%d", &quantity3);
            switch(snack3){
                case 'P':
                    value3 = 500;
                    break;
                case 'B':
                    value3 = 200;
                    break;
                case 'S':
                    value3 = 150;
                    break;
                case 'F':
                    value3 = 50;
                    break;
                default:
                    printf("Invalid snack type.\n");
                    return 1;
            }
            printf("Please enter the fourth snack you want to order: \n");
            scanf(" %c", &snack4);
            printf("Please enter the quantity: \n");
            scanf("%d", &quantity4);
            switch(snack4){
                case 'P':
                    value4 = 500;
                    break;
                case 'B':
                    value4 = 200;
                    break;
                case 'S':
                    value4 = 150;
                    break;
                case 'F':
                    value4 = 50;
                    break;
                default:
                    printf("Invalid snack type.\n");
                    return 1;
            }
            printf("%d %c value %d\n",quantity1,snack1,value1*quantity1);
            printf("%d %c value %d\n",quantity2,snack2,value2*quantity2);
            printf("%d %c value %d\n",quantity3,snack3,value3*quantity3);
            printf("%d %c value %d\n",quantity4,snack4,value4*quantity4);
            break;

        default:
            printf("Invalid number of snack types.\n");
            break;
    }

    return 0;
}