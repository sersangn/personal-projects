#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_EMOTIONS 10;

int main(void){
    printf("\n\n\nWelcome to the emotion box, where your emotions are stored for safe keeping ٩(＾◡＾)۶ \n");
    printf("\n\n\nAll you need to do is take a deep breath and type in your emotion \n");
    printf("List an the emotion you're feeling right now \n");

    char emotion[100];

    scanf("%s", emotion);

    for (int i = 0; i < strlen(emotion); i++) {
        emotion[i] = tolower(emotion[i]);
    }
    
    printf("\n\n...Processing...\n\n");
    if(strcmp(emotion,"sad")==0){
        printf("so you are feeling sad (╯•﹏•╰)\n\n");
        printf("I'm sorry to hear that :( \n\n");
        printf("Here is bobby the bear ＼ʕ •ᴥ•ʔ／, he says things will get better soon!\n\n");
    }
    else if (strcmp(emotion,"happy")==0){
        printf("so you are feeling happy ๑(◕‿◕)๑\n\n");
        printf("Glad to hear that :) \n\n");
    }
    else if (strcmp(emotion,"bored")==0){
        printf("So you are feeling bored, Here's a joke to keep you entertained: \n\n");
        printf("Why do oranges wear sunscreen?\n\n");
        printf("\n\n");
        printf("So they don't peel. \n\n");

    }
    else if (strcmp(emotion,"angry")==0){
        printf("So you are feeling angry \n\n");
        printf("Anger is an emotion that harms us more the longer we hold on to it\n\n");
        printf("Take a deep breath and count down from 10....\n\n");
    }
    else if (strcmp(emotion,"tired")==0){
        printf("So you are feeling tired \n\n");
        printf("You should take regular rests when you're feeling tired\n\n");
        printf("Don't push yourself too much!\n\n");
    }
    else{
    printf("So you are feeling %s \n\n", emotion);
    }

    printf("We have stored it in a safe location! \n\n");
    printf("Our treasure box of emotions: \n\n");

    printf("----------------\n");
    printf("|               |\n");
    printf("-----------------\n");
    printf("|      <3       |\n");
    printf("|               |\n");
    printf("|               |\n");
    printf("----------------\n");

    printf("Would you like to see your stored emotion? (yes/no) \n\n");

    char choice[10];
    char yes[4] = "yes";
    scanf("%s", choice);
    if(strcmp(choice,yes)==0){
        printf("\nYour emotion: %s \n\n", emotion);
    }

    printf("We will store it for you! \n\nThank you for using our services ٩(＾◡＾)۶ \n\n\n");

}