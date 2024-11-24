#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct player{
    char name[20];
    char position[20];
    int age;
};

struct team{
    char name[20];
    char sport[20];
    struct player p[11];
};

void addPlayer(int i, struct team t[])
{
    int teamNum;
    printf("Enter Team Number In Which You Want To Add Player: \n");
    scanf("%d", &teamNum);
    printf("Enter Player Name: \n");
    scanf("%s", t[teamNum-1].p[i].name);
    printf("Enter Player Age: \n");
    scanf("%d", &t[teamNum-1].p[i].age);
    printf("Enter Player Postion: \n");
    scanf("%s", t[teamNum-1].p[i].position);
}

void displayTeamDetails(int i, int n, struct team t[])
{
    for(int j = 0; j < n; j++)
    {
        printf("\n\t\t\tTeam %d\n", j+1);
        printf("Team Name: %s\n", t[j].name);
        printf("Sports: %s", t[j].sport);
        for(int k = 0; k < i; k++)
        {
            printf("\n\t\t\tPlayer %d\n", k+1);
            printf("Player Name: %s\n", t[j].p[k].name);
            printf("Player Position: %s\n", t[j].p[k].position);
            printf("Player Age: %d\n", t[j].p[k].age);
        }
        printf("\n");
    }
}

void searchPlayer(char search[], int l, int tm, struct team t[])
{
    for(int i = 0; i < tm; i++)
    {
        for(int j = 0; j < l; j++)
        {
            if(strcmp(search, t[i].p[j].position) == 0)
            {
                printf("Player Name: %s\n", t[i].p[j].name);
                printf("Player Position: %s\n", t[i].p[j].position);
                printf("Player Age: %d\n", t[i].p[j].age);    
            }
        }
    }
}

int main()
{
    int nTeam, ch, i = 0;
    char searchPos[20];
    printf("Enter Number Of Teams: \n");
    scanf("%d", &nTeam);
    
    struct team T[nTeam];
    
    for(int i = 0; i < nTeam; i++)
    {
        printf("\t\t\tTeam %d\n\n", i+1);
        printf("Enter Team Name: \n");
        scanf("%s", T[i].name);
        printf("Enter Sports: \n");
        scanf("%s", T[i].sport);
    }
    
    do
    {
        printf("\nEnter\n1. Add Player\n2. Display Team Details\n3. Search Player By Position\n4. Exit\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                addPlayer(i, T);
                i++;
                break;
            case 2:
                displayTeamDetails(i, nTeam, T);
                break;
            case 3:
                printf("\nEnter Position For Search: \n");
                scanf("%s", searchPos);
                searchPlayer(searchPos, i, nTeam, T);
                break;
            case 4:
                printf("\nThankYou For Using!");
                break;
            default:
                printf("\nInvalid Input!");
                break;
        }
    }
    while(ch != 4);
}