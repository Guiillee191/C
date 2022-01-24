#include <stdio.h>


typedef struct _stats{
    int points;
    int games;
} Stats;

typedef struct _players{
    Stats player[5];
} Players;

int main(void){
    Players j;
    for(int i=0;i<5;i++){
        printf("Enter player %d point total: ", i);
        scanf("%d", &j.player[i].points);
        printf("Enter player %d game total: ", i);
        scanf("%d\n", &j.player[i].games);
    }
    
    float tmp;
    for(int i=0;i<5;i++){
        tmp=( (float)j.player[i].points/j.player[i].games);
        printf("Player %d avg: %.2fppg\n", i, tmp);
    }
    return 0;
}
