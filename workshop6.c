#include <stdio.h>
#include "ipc144math.h"
void welcome_message(void){
	printf("welcome to math calculator\n");
	printf("==========================\n");
	//because this function has a void return type
	//you don't need a return statement
	return; //optional
}

/*
force the user to enter a number between minimum and maximum inclusive
return the chosen number
*/
int validateInput(int minimum, int maximum){
	int choice = minimum - 1;
	printf("Enter an integer (%d to %d): ", minimum, maximum);
	scanf("%d", &choice);
	while(choice < minimum || choice > maximum ) {
		printf("ERROR : Enter an integer (%d to %d): ", minimum, maximum);
		scanf("%d",&choice);
	}
	
	return choice;
}

int main(void){
	//store the user's menu choice
	int choice = -1;
	//show welcome message
	welcome_message();
	//display the menu.. etc..
	while(choice != 0){
		printf("Ener a command: 0 to quit, 1 to compute power, 2 to compute factorial.\n");
		//call our validateInput function to get the user's choice
		choice = validateInput(0, 2);
		if(choice == 1){
			//compute the power
			//use validateInput to get a base from the user

			//use validateInput to get a exponent from the user

			//use the power function to compute the power

			//display the result of base raised to exponent
		}else if(choice == 2){
			//compute factorial

			//use validateInput to get a number from the user

			//use the factorial function to compute the factorial

			//display the result

		}
	}
	return 0;	
}
