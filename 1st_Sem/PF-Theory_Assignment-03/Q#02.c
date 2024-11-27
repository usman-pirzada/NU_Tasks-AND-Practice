#include <stdio.h>
#include <stdlib.h>
#define totPlyr 2	// For two players

void playGame(struct, int*);
bool validateScore(int *);
findWinner();
scoreBoard()

struct Player {
	char playerName[20];
	unsigned int ballScores[12];
	unsigned int totalScore;
};

int main() {
	struct Player players[totPlyr];
    for(int plyr = 0, plyr < totPlyr; plyr++) {    // Iterate for two players
        for(int ball = 0; ball < 12; ball++) {  // Iterate for 12 balls
            playGame(players[plyr], plyr, ball);
        }
    }
	
	return 0;
}

void playGame(struct Player (*players)[], int *plyr, int *ball) {
	int currentScore = 0;

    printf("Enter your score for ball#%d: ", ball + 1);
	scanf("%d", &currentScore);
	if(validateScore(currentScore)) {
		players[plyr]->ballScores[ball] = currentScore;
	}
}

bool validateScore(int *currentScore) {
    if(currentScore >= 0 && currentScore <= 6) {
        return 1;
    } else {
		return 0;
	}
}

findWinner() {
	
}

scoreBoard() {
	
}