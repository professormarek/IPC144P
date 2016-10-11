/*
the purpose of this program is to demonstrate some simple function
declarations and function calls
*/

#include <stdio.h>

/*
your function declarations go before the main function
*/

/*
the welcome_message function displays a simple welcome message
it doesn't accept any information as arguments (void)
it doesn't provide a value back to the caller (void)
*/
void welcome_message(void){

	printf("welcome to the program\n");
	printf("it doesn't do much yet\n");
	printf("but stay tuned!!!\n");
}


int main(void){
	//call a function by writing its name followed by ()
	//provide arguments between the () if the function expects any arguments
	welcome_message();

	return 0;
}
