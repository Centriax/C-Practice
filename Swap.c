#include <stdio.h>
#include <unistd.h>

int main(void){
	int x, y;
	int choice;
	printf("Please enter a number: ");
	scanf("%d", &x);
	printf("Please enter another number: ");
	scanf("%d", &y);
	printf("\n");

	printf("Current: X = %i, Y = %i\n\n", x, y);
	sleep(1);
	printf("Choose below:\n1)Swap Numbers\n2)Exit\n\n");
	scanf("%d", &choice);

	if(choice == 1){

              int temp = x;
	      x = y;
	      y = temp;
	      sleep(1);
	      printf("After: X = %i, Y = %i\n", x, y);
	      return 0;
	      

	}
	else if(choice == 2){
		printf("Exiting..");
		sleep(1);
		return 0;
	}
	else{
		printf("Not sure about that one..");
		return 1;
	}
}
