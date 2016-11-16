/*
this program demonstrates more robust input validation
including clearing the buffer
*/
#include <stdio.h>

/*
ALWAYS CLEAR THE INPUT BUFFER AFTER EVERY scanf AND BEFORE THE NEXT scanf
the function below clears the input buffer
*/
void clrInputBuf(void){
	char c = 0;
	while(c != '\n'){
		c = getchar();
		/*uncomment the line below to see which characters are being discarded from the buffer */
		//printf("DEBUG: character cleared from buffer: %c ASCII code: %d\n", c, c);
	}
}

int main(void){
	int count = 0;
	int myInt = 0;
	char delimeter = 0;
	float myFloat = 0;
	//let's get the user to input a integer and a floating point number separated by a colon ':'
	do{
		printf("Enter an integer and a floating point number separated by a colon ");
		count = scanf("%d%c%f", &myInt, &delimeter, &myFloat);
		clrInputBuf();
	}while(count != 3); //could add additional logic to the condition with && and ||
	
	//display the correctly entered values
	printf("\n\nThe int is: %d, the float is: %f, and the delimeter is %c\n", myInt, myFloat, delimeter);

	printf("program complete!\n");
	return 0;
}
