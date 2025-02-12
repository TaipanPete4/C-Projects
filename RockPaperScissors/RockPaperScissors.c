#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int scoreMe = 0;
    int scoreComputer= 0;
    char CompMove[10] ;
    char MyMove[10];
    int rd_num;
    unsigned int seed;
    srand(time(NULL) + getpid());
    char ch;

    printf("\n");
    printf("WELCOME TO SCISSORS, PAPER ROCK \n");
    printf("\n");

    while(MyMove != "GAME"){

        printf("What's your move? ");
        scanf("%s",MyMove);
        printf("\n");

        if(!(strcmp(MyMove, "0"))){break;}

        printf("You played ");
        //sleep(1); printf(".");
       // sleep(1); printf(".");
        //sleep(1); printf(". ");
        printf("... %s \n", MyMove);
        sleep(1);

        rd_num = (rand() % 3) + 1;
     

        printf("\n");
        printf("Computer played ");
        sleep(1); printf(".");
        sleep(1); printf(".");
        sleep(1); printf(". ");

        if(rd_num == 1) {strcpy(CompMove, "Rock");}
        if(rd_num == 2) {strcpy(CompMove, "Scissors");}
        if(rd_num == 3) {strcpy(CompMove, "Paper");}        

        printf("%s \n", CompMove);
        sleep(1);

        if(!(strcmp(MyMove,"Rock")) && !(strcmp(CompMove,"Rock"))
            || !(strcmp(MyMove,"Scissors")) && !(strcmp(CompMove,"Scissors"))
            || !(strcmp(MyMove,"Paper")) && !(strcmp(CompMove,"Paper")))
        {
            printf("\nTIE :|\n\n");
        }

        if(!(strcmp(MyMove,"Rock")) && !(strcmp(CompMove,"Paper"))
            || !(strcmp(MyMove,"Scissors")) && !(strcmp(CompMove,"Rock"))
            || !(strcmp(MyMove,"Paper")) && !(strcmp(CompMove,"Scissors")))
        {
            printf("\nYou LOSE :(\n\n");
            scoreComputer++;
        }

        if(!(strcmp(MyMove,"Rock")) && !(strcmp(CompMove,"Scissors"))
            || !(strcmp(MyMove,"Scissors")) && !(strcmp(CompMove,"Paper"))
            || !(strcmp(MyMove,"Paper")) && !(strcmp(CompMove,"Rock")))
        {
         printf("\nYou WIN :)\n\n");
         scoreMe++;
        }

        sleep(2);

        printf(" -------------------\n");
        printf("| Me..............%d |\n", scoreMe);
        printf("| Computer........%d |\n", scoreComputer);
        printf(" -------------------\n\n");

    }

    printf("\nThanks for playing!\n\n");
    sleep(1);
    printf("\nFinal Score\n\n");

    printf(" -------------------\n");
    printf("| Me..............%d |\n", scoreMe);
    printf("| Computer........%d |\n", scoreComputer);
    printf(" -------------------\n\n");

    sleep(1);

    printf("Press any key to close");
    getchar();
    getchar();

    return 0;


}

