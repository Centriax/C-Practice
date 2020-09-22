#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){


        int score;
	int answer;
	int incorrect;

	while(score < 10){
            
		int x = rand() % 12;
		int y = rand() % 12;

		printf("What is %i x %i: \n", x, y);
		scanf("%i", &answer);

		if(answer == (x*y)){
			printf("Correct!\nScore++\n\n");
			score++;
		}
		else{
			printf("Incorrect.\nScore--\n\n");
			score--;
			incorrect++;
		}

		sleep(1);
	        system("clear");	
	}

	printf("Congratulations, You reached a score of 10!\n");
	printf("You got %i incorrect\n", incorrect);
}
