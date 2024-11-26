#include <stdio.h>
#include <stdlib.h>
#define p 2 // Currently 2 players

struct Player {
    int ballScores;
    char playerName[20];
    int totalScore;
}

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
