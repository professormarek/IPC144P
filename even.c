/*
this program will ask the user to enter a number
and tell the user whether that number is even or odd
uses selection and the % modulus operator
*/

#include <stdio.h>

int main(void){
	int input = 0;
	printf("Enter a whole number: ");
	scanf("%d", &input);
	//if the remainder of dividing input by 2 is 0, that means input is even
	if(input % 2 == 0 )
		printf("Your number was even\n");
	else	
		printf("Your number was odd\n");
	//notice I didn't use { }  curly braces above. Where should they go?
	return 0;
}
