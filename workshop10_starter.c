#include <stdio.h>
//TODO: include the string library

//TODO: define constants for array sizes

int main(void){
	/*TODO: declare an input string that can hold up to 100 characters plus one terminating null character. Initialize to empty string*/

	/*TODO: declare a name string that can hold up to 8 characters plus one terminating null character. Initalize it to "default"*/

	printf("default name is: %s\n", name);

	printf("Enter a name 100 characters or less: ");
	/*TODO: read up to 100 characters into the input string or until the newline is encountered*/

	/*TODO: change the condition to ensure that there is enough space in the name string to copy the input string.*/
	if( 1 ){
		//TODO: copy the input string to the name string

	}
	/*TODO: in the condition compare the name string with the literal string "default" to detemrine if it was successfully changed */
	if( 0 ){
		printf("name was successfully changed!\n");
	}else{
		printf("could not copy name, was too long!!\n");
	}
	/*TODO: display the input string */

	/*TODO: display the name string */

	return 0;
}
