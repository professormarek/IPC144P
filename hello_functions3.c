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

/*
Power Function
this function is a mathematical function
that accepts two whole numbers as arguments
it computes and provies a result back to the caller
specifically, it computes the result of the base raised to the power of the exponent

notice that arguments are separated by commas
*/
int power(int base, int exponent ){
	int result = 1;

	//use a loop to compute the result
	for(int i = 0; i <= exponent ; i++){
		result = result * base;
		printf("DEBUG: base %d, exponent %d, result %d, i %d\n", base, exponent, result, i);
	}
	//recall that if your function's return type is not void
	//your function needs to return a value back to the caller
	return result;
}

int main(void){
	int b, e, p;
	//call a function by writing its name followed by ()
	//provide arguments between the () if the function expects any arguments
	welcome_message();
	//get a base and exponent from the user
	printf("enter the base: ");
	scanf("%d", &b);
	printf("enter the exponent: ");
	scanf("%d", &e);
	/*
	compute the power of base raised to exponent store the result in int p
	notice that the order of the arguments is the same as the order in the power function declaration above
	the result returned from the function is on the RHS of the assignment and we store it in variable p on the LHS
	*/
	p = power(b, e);
	printf("base: %d raised to the exponent: %d is: %d\n", b, e, p);

	//at the end of the program display the goodbye message

	goodbye_message(3);

	return 0;
}
