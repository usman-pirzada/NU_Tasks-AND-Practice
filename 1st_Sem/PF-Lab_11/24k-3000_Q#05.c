#include <stdio.h>
#include <conio.h>

struct Player {
	char name[20];
	int age;
	int position;
};

struct Team {
	name
	sport
	struct Player *plyr;
};

void addPlayers();
void searchPlayers();
void displayTeamdetail();

int main() {
	int select = 0;
	printf("\nWhich operation do you want to perform? Enter appropriate number to perform that operation:\n");
	printf(" 1) Add New Team\n 2) Add a New Player in existing Team\n 3) Search a Player by Position\n 4) Display Team Details\n 5) Exit\n");
	select = getch();
	switch(select) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		default:
			printf("\n\tInvalid Input!!");
			main();		
	}
	
	return 0;
}

void addPlayers() {
	
}

void searchPlayers() {
	
}

void displayTeamdetail() {
	
}