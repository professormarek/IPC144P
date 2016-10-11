/*
the purpose of this program is to demonstrate some simple function
declarations and function calls
Version 2
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

/*
the goodbye_message function accepts a single piece of information (a whole number)
as an argument
it doesn't return a result
it will print the goodbye message the indicated number of times
*/
void goodbye_message(int number){
	//number is the name of our argument to this function
	//think of it as a varaible that you can only see and use inside the { } of this function
	//print out the goodbye message - number of times
	for(int i = 0; i < number; i++){
		printf("have a nice day\n");
	}
}


int main(void){
	//call a function by writing its name followed by ()
	//provide arguments between the () if the function expects any arguments
	welcome_message();

	//here we'll eventually do some work

	//at the end of the program display the goodbye message

	goodbye_message(3);

	return 0;
}
