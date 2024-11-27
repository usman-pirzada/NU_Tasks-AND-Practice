#include <stdio.h>
#include <stdlib.h>

struct Player {
	char playerName[20];
	unsigned int ballScores;
	unsigned int totalScore;
};

int main() {
	struct Player players[p];
    for(int i = 0, i < p; i++) {    // Iterate for two players
        for(int balls = 1; balls <= 12; balls++) {  // Iterate for 12 balls
            playGame(players[i], i);
        }
    }
	
	return 0;
}

void playGame(struct Player *players, int *i) {
    printf("Enter your score for ball#%d: ", ball);
    scanf("%d", &players[i]->ballScores);
    validateScore(score);
}

validateScore(int *score) {
    if() {
        return;
    } else {

    }
}

findWinner() {
	
}

scoreBoard() {
	
}