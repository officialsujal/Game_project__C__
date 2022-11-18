////These SET of code execute a small game of guessing a number from 1-100 and user have to guess the number which computer think....(The Number of attempt will count.)
//01//
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num, guessed=1,G_attempt=1;

    srand(time(0));
    num = rand()%100+1;     ////----->it genrates random number 1-100 .

    do{
        printf("Enter a number from 1-100: \n");
        scanf("%d", &guessed);

        if(num>guessed){
            printf("Higher number Please.\n");
        }
        else if(num<guessed){
            printf("Lower number Please.\n");
        }
        else{
            printf("You guessed it in %d attempt.", G_attempt);
            break;
        }
        G_attempt++;
    }
    while(guessed!=num);
    return 0;
}