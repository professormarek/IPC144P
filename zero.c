/*
this program demonstrates a function that accepts the address of a variable as an argument
the function will change the original value of the variable that's passed by address
the main function demonstrates this
*/
#include <stdio.h>

/*
TODO:change this function to accept a POINTER to an integer
*/
void zero(int x){
	printf("inside the zero function the address of the varaible is: %p\n", &x);
	//TODO:you will need to dereference the variable in order to access its value
	x = 0;

}

int main(void){

	//declare and initalize an integer variable
	int x = 5;
	//display the value of x
	printf("the value of x is: %d\n", x);
	//display the address of x
	//NOTE: use the %p conversion in order to display memory addresses
	printf("the address of x is: %p\n", &x);

	//call the function to set the value of x to 0
	//TODO:use the address-of operator to pass the address of x to the function
	zero(x);
	//display the new value of x
	printf("the value of x after the fucntion call is: %d\n", x);
	return 0;

}
