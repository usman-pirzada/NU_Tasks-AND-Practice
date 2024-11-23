#include <stdio.h>
//#include <conio.h>
#define teamSize 100	// 100 Teams max
#define plyrSize 11		// 11 Players

struct Player {
	char name[20];
	int age;
	int position;
};

struct Team {
	char name[20];
	char sport[20];
	struct Player plyr[plyrSize];
} teams[teamSize];

void addPlayers();
void searchPlayers();
void displayTeamdetail();

int main() {
	int t, p, proceed = 1;
	
	do{
	int select = 0;
	printf("\nWhich operation do you want to perform? Enter appropriate number to perform that operation:\n");
	printf(" 1) Add Players\n 2) Search a Player by Position\n 3) Display Team Details\n 4) Exit\n");
	scanf(" %d", &select);
	getchar();
	//fflush(stdin);
	//select = getchar();
	switch(select) {
		case 1:
			addPlayers();
			break;
		case 2:
			printf("\nEnter the Team No. and the Player's position in the format (TT PP) to search for: ");
			scanf(" %d %d", &t, &p);
			searchPlayers(t, p);
			break;
		case 3:
			printf("\nEnter the Team No. to view its details: ");
			scanf("%d", &t);
			displayTeamdetail(t);
			break;
		case 4:
			break;
		default:
			printf("\n\tInvalid Input!!");
	}
	
	printf("\n\tEnter any number except \'0\' to proceed.... ");
	scanf(" %d", &proceed);
	}while(proceed != 0);
	
	return 0;
}

void addPlayers() {
	int t;
	printf("\nEnter the team no. to add players (If already existing, it will be overwritten): ");
	scanf("%d", &t);
	getchar();
	if (t < 0 || t >= teamSize) {
        printf("Invalid Team number.\n");
        return;
    }
	printf("\nStart entering players' details' in order ?\n");
	for(int p = 0; p < plyrSize; p++) {
		printf("\n\tPlayer #%d\n", p + 1);
		fflush(stdout);
		printf("Enter Name: ");
		fgets(teams[t].plyr[p].name, sizeof(teams[t].plyr[p].name), stdin);
		printf("Enter Age: ");
		scanf("%d", &teams[t].plyr[p].age);
		printf("Enter Position: ");
		scanf("%d", &teams[t].plyr[p].position);
	}
}

void searchPlayers(int t, int p) {
	if (t < 0 || t >= teamSize || p < 0 || p >= plyrSize) {
    printf("Invalid Team or Player position.\n");
    return;
	}
	printf("\nThe details of the player you searched for are given below?\n");
	printf("\n\tPlayer #%d\n", p + 1);
	printf(" Name: %s", teams[t].plyr[p].name);
	printf(" Age: %d", teams[t].plyr[p].age);
	printf(" Position: %d", teams[t].plyr[p].position);
}

void displayTeamdetail(int t) {
	if(t < teamSize) {
		printf("\nFollowing are the details of Team #%d ?\n", t);
		printf("  Team's Name: %s", teams[t].name);
		printf("  Team's Sport: %s\n", teams[t].sport);
		printf("\t\tPlayers:");
		for(int p = 0; p < plyrSize; p++) {
			printf("\n\tPlayer #%d\n", p + 1);
			printf(" Name: %s", teams[t].plyr[p].name);
			printf(" Age: %d", teams[t].plyr[p].age);
			printf(" Position: %d", teams[t].plyr[p].position);
		}
	}
}