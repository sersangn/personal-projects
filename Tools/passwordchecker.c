#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h> 

bool isSafe(char pwd[]){

    int twoUpp = 0;
    int twoLow = 0;
    int twoDig = 0;

    for(int i = 0; i<strlen(pwd); i++){
        if(isupper(pwd[i])){
            twoUpp++;
        }
        if(islower(pwd[i])){
            twoLow++;
        }
        if(isdigit(pwd[i])){
            twoDig++;
        }

    }

    if(twoUpp>=2 && twoLow>=2 &&twoDig>=2){
        return true;
    }
    else{
        return false;
    }

}

int main(int argc, char *argv[]){

    printf("Your password is: %s", isSafe(argv[1]) ? "safe" : "not safe \n");

}