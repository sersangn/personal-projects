//Pokedex in C
#include <stdio.h>
#include <string.h>


int main(void){
    char name[40];
    printf("Hello welcome to the Pokedex\n\n");
    printf("Please enter the Pokemon name you're looking for\n");
    scanf("%s", name);

    if(strcmp(name, "bulbasaur")==0){
        printf("Name: Bulbasaur \n");
        printf("Number: #0001 \n");
        printf("There is a plant seed on its back right from the day this Pokémon is born. The seed slowly grows larger.\n");


    }
}