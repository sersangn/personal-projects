#include <stdio.h>
#include <stdlib.h>

//fortunes from this website: https://www.best-ever-cookie-collection.com/fortune-cookie-sayings.html

int main(int argc, char *argv[]){
    int number =0;
    printf("Choose a number between 1 to 10 and get your fortune cookie! \n");
    scanf("%i", &number);  
    
    switch (number)
    {
    case 1:
        printf("Do not be afraid of competition. \n");
        break;
    case 2:
        printf("An exciting opportunity lies ahead of you.");
        break;
    case 3:
        printf("You love peace.");
        break;
    case 4:
        printf("You will always be surrounded by true friends.");
        break;
    case 5:
        printf("Sell your ideas-they have exceptional merit.");
        break;
    case 6:
        printf("A journey of a thousand miles begins with a single step.");
        break;
    case 7:
        printf("Respect yourself and others will respect you.");
        break;
    case 8:
        printf("Bloom where you are planted.");
        break;
    case 9:
        printf("Appreciate. Appreciate. Appreciate.");
        break;
    case 10:
        printf("A routine task will turn into an enchanting adventure.");
        break;
    
    default:
        break;
    }

}