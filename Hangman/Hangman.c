#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void PrintMan(int errors){

    if(errors==0){

        printf("             ");printf("\n");
        printf("               ");printf("\n");
        printf("           ");printf("\n");
        printf("                ");printf("\n");
        printf("             ");printf("\n");
        printf("               ");printf("\n");
        printf("                   ");printf("\n");
        printf("");printf("\n");
        printf("");printf("\n");
    }

    if(errors==1){
    printf("   ");printf("\n");
    printf("             ");printf("\n");
    printf("   	   ");printf("\n");
    printf("          ");printf("\n");
    printf("           ");printf("\n");
    printf("          ");printf("\n");
    printf("_____________      ");printf("\n");
    printf("");printf("\n");
    printf("");printf("\n");
    }

    if(errors==2){
        printf("   ");printf("\n");
        printf("   |         ");printf("\n");
        printf("   |	  ");printf("\n");
        printf("   |        ");printf("\n");
        printf("   |        ");printf("\n");
        printf("   |       ");printf("\n");
        printf("___|_________      ");printf("\n");
        printf("");printf("\n");
        printf("");printf("\n");
    }

    if(errors==10){
    printf("   __________");printf("\n");
    printf("   |        |  ");printf("\n");
    printf("   |	   ( )");printf("\n");
    printf("   |       \\|/ ");printf("\n");
    printf("   |        |");printf("\n");
    printf("   |       / \\");printf("\n");
    printf("___|_________      ");printf("\n");
    printf("");printf("\n");
    printf("");printf("\n");
    }

    printf("\n\n");
}




int main()
{
    char word[20];
    int i;
    size_t len;
    char lettersGuessed[30];
    char ch;
    char wordGuessed[20];
    int errors = 0;

    printf("\nWelcome to Hangman\n\n");
    printf("Hangman word: ");
    scanf("%s", word);
    len = strlen(word);


    for(i=0; i<len; i++){ 
        wordGuessed[i]= '_'; 
        printf("%c",wordGuessed[i]);
    }
   // wordGuessed[len]= '\0';
 
    //printf("%d", len);

    //printf("%s \n", wordGuessed);

    printf("\n");

    printf("First Guess: ");

    while(1)
    {
    ch = _getch();

    printf("%c ", ch);
    if(ch=='0'){break;}
    sleep(1); printf(".");
    sleep(1); printf(".");
    sleep(1); printf(".");
    sleep(1); printf("\n\n");

    PrintMan(errors);

    for(i=0; i<len; i++){ 
        if(word[i]==ch){
        wordGuessed[i]= ch; 
        }
        else{errors++;}
        printf("%c",wordGuessed[i]);
    }
    printf("\n\n");
    printf("Next Guess: ");

    }

    printf("\n");

    printf("   __________");printf("\n");
    printf("   |        |  ");printf("\n");
    printf("   |	   ( )");printf("\n");
    printf("   |       \\|/ ");printf("\n");
    printf("   |        |");printf("\n");
    printf("   |       / \\");printf("\n");
    printf("___|_________      ");printf("\n");
    printf("");printf("\n");
    printf("");printf("\n");
    }

