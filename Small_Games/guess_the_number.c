#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    printf("Hello welcome to guess the number!, You need to guess the number between 1 and 10\n\n");
    int guess = 0;
    printf("Input your guess: \n");
    scanf("%i", &guess);

    //Use current time as a seed for rand()
    srand(time(0)); 
    //Generate random number
    int num = (rand() %  (10 - 1 + 1)) + 1;

    while(guess!=num){
        if(guess > num){
            printf("Value is lower\n");
            scanf("%i", &guess);

        }
        else if(guess < num){
            printf("Value is higher\n");
            scanf("%i", &guess);
        }

    }
    printf("Correct the number is %d \nGood job! \n", num);

}