#include <stdio.h>
#include <string.h>
/*
this program demonstrates working with command line argumetns within a unix pipeline
notice that command line arguments are represented as an array of strings (a 2 dimensional array of type char)
notice also that the operating system splits the users's command line arguments using whitespace

at the start of the course I lied and said that main only accepts void
in fact, the number of arguments and their string representations 
are passed to your program by the Operating System
int argc - the count of arguments entered by the user
char *argv[] - values of the arguments as a 2D array of strings passed by address
*/
int main(int argc, char *argv[]){
	//declare a variable to hold each character of input as it is being read in
	char c = 0;
	int reverse = 0;//true indicates that the user wants to reverse substitutions
	//let's verify the number of arguments entered by the user
	fprintf(stderr, "DEBUG: the number of command line arguments is: %d\n", argc);
	//let's view the command line arguments entered by the user
	for(int i = 0; i < argc; i++){ 
		fprintf(stderr, "DEBUG: the argument at index %d is %s\n", i, argv[i]); 
		//compare each command line argument with the available ones we decided on.
		// an argument of -r will make our program reverse the letter to number substitutions
		if(strcmp(argv[i], "-r") == 0){
			//the user wants to reverse substitutions
			reverse = 1;
			fprintf(stderr, "DEBUG: user chose to reverse substitutions\n");
		}
	}
	//let's process the input from STDIN until we reach EOF (end of file)
	c = getchar();//get the next character from standard input
	while (c != EOF) {//go until end of input file (STDIN)
		//before printing out the character, do any necessary substitutions
		if(reverse){
			//reverse substitution
			if(c == '3'){
				c = 'e';
			}
		}else{
			//original subsitution
			if(c == 'e' || c == 'E'){
				c = '3';
			}
		} 
		putchar(c);//write the character to standard output (STDOUT)
		c = getchar();//get the next character
	}

	return 0;
}
