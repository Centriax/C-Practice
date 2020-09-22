#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main(void){
    printf("Welcome to Guess The Number!\n");
    sleep(1);

    int theNumber = rand() % 20;

    printf("I created a number between 0 and 20\n");

    sleep(1);
    int choice;

    for(int i = 0; i < 5; i++){
        printf("Guess it:\n");
        scanf("%d", &choice);

        if(choice == theNumber){
           break;
        }
        else if(choice > theNumber){
            printf("That was too big\n");

            sleep(1);
        }
        else if(choice < theNumber){
            printf("That was too small\n");

            sleep(1);
        }
        else{
            printf("Not sure.");
        }
    }

    if(choice == theNumber){
        printf("Correct, Nice Job\n");
    }
    else{
        printf("Out of chances, it was %d\n", theNumber);
    }

    
    


}
