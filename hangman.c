#include <stdio.h>
/*
Making a hangman game, only options are apple at this point and it doesn't keep log of the tries
*/

void drawhang(int guess){
    switch (guess)
    {
        case 1:
            printf("----\n");
            break;
        case 2:
            printf("|   \n");
            printf("|   \n");
            printf("|   \n");
            printf("|   \n");
            printf("----\n");
            break;
        case 3:
            printf("---------\n");
            printf("|   \n");
            printf("|   \n");
            printf("|   \n");
            printf("|   \n");
            printf("----\n");
            break;

        case 4:
            printf("---------\n");
            printf("|   |\n");
            printf("|   \n");
            printf("|   \n");
            printf("|   \n");
            printf("----\n");
            break;
        case 5:
            printf("---------\n");
            printf("|   |\n");
            printf("|   O\n");
            printf("|  /|\\ \n");
            printf("|   \n");
            printf("----\n");
            break;
        case 6:
            printf("---------\n");
            printf("|   |\n");
            printf("|   O\n");
            printf("|  /|\\ \n");
            printf("|  / \\ \n");
            printf("----\n");
            break;
        default:
            break;
    }
}
int main(void){
    printf("Welcome to Hangman \n");
    printf("Topic fruits \n");
    printf("_ _ _ _ _ \n");

    char input;
    int count = 0;
    int guess = 0;
    scanf("%s", &input);

    while(count!=5 && guess!=6){
        switch (input)
        {
            case 'a':
                count++;
                printf("a _ _ _ _ \n");
                scanf("%s", &input);
                break;
            case 'p':
                count++;
                printf("_ p p _ _ \n");
                scanf("%s", &input);
                break;
            case 'l':
                count++;
                printf("_ _ _ l _ \n");
                scanf("%s", &input);
                break;
            case 'e':
                count++;
                printf("_ _ _ _ e \n");
                scanf("%s", &input);
                break;         
            default:
                guess++;
                drawhang(guess);
                scanf("%s", &input);
                break;
        }
    }   
}