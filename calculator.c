#include <stdio.h>

int main(void){
    printf("Hello this is a calculator program that does some simple calculations for you \n");
    printf("First input your two numbers \n");

    int number1=0;
    int number2=0;
    int option=0;
    printf("Input your first number  ");
    scanf("%d", &number1);
    printf("Input your second number  ");
    scanf("%d", &number2);

    printf("What would you like to do with these numbers\n\n");
    printf("Your options:\n");
    printf("1. Add:\n");
    printf("2. Subtract:\n");
    printf("3. Multiply:\n");
    printf("4. Divide:\n");
    
    scanf("%d", &option);

    int returnvalue=0;

    switch (option)
    {
    case 1/* constant-expression */:
        returnvalue = number1 + number2;
        /* code */
        break;

    case 2:
        returnvalue = number1 - number2;
        break;

    case 3:
        returnvalue = number1 * number2;
        break;

    case 4:
        returnvalue = number1/number2;
        break;
    
    default:
        break;
    }

    printf("Your result %d \n", returnvalue);

}