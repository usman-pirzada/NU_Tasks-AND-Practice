#include <stdio.h>
#include <stdlib.h>
#define totPlyr 2	// For two players

struct Player {
	char playerName[20];
	unsigned int ballScores[12];
	unsigned int totalScore;
};

void playGame(struct Player, int*, int*);
int validateScore(int*);
void scoreBoard(struct Player);
void findWinner(struct Player);

int main() {
	struct Player players[totPlyr];
    for(int plyr = 0; plyr < totPlyr; plyr++) {    // Iterate for two players
        for(int ball = 0; ball < 12; ball++) {  // Iterate for 12 balls
            playGame(*players, &plyr, &ball);
        }
    }

	scoreBoard(*players);
	findWinner(*players);
	
	return 0;
}

void playGame(struct Player players, int *plyr, int *ball) {
	int currentScore = 0;

    printf("Enter your score for ball#%d: ", ball + 1);
	scanf("%d", &currentScore);
	if(validateScore(&currentScore)) {
		players[plyr]->ballScores[ball] = currentScore;
		players[plyr]->totalScore += currentScore;
	}
}

int validateScore(int *currentScore) {
    if(currentScore >= 0 && currentScore <= 6) {
        return 1;
    } else {
		return 0;
	}
}

void scoreBoard(struct Player *players) {
	for(int i = 0; i < totPlyr;i++) {
		printf("\n\t\tPlayer-%d: %s\n", i + 1, players->playerName);
		for(int j = 0; j < 12; j++) {
			printf(" Ball#%d: %d\n", j + 1, players->ballScores[j]);
		}
		printf("\n\tTotal Scores: %d", players[i]->totalScore);
	}
}

findWinner(struct Player *players) {
	if(players[0]->totalScore > players[1]->totalScore) {
		printf("\n\n\t\t%s id the winner!", players->playerName)
	} else if(players[0]->totalScore == players[1]->totalScore) {

	}
}