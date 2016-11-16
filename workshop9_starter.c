/*
this program demonstrates opening a file for reading
and opening a second file for writing
this program reads from the first file one character at a time
and writes to the output file one character at a time
*/

#include <stdio.h>

int main(void){
	
	char c = 0; //this is going to store the character we read out of the input file
	//file pointers are our exclusive way to deal with files
	FILE *inFile = NULL; //file for input, don't forget to initialize to NULL!
	FILE *outFile = NULL; //file for output
	//before we can interact with a file we need to open it
	//open the inFile for reading
	inFile = fopen("notes.txt" , "r"); /*don't forget double quotes for both the filename and mode*/
	outFile = fopen("modified.txt", "w"); //open the output file for writing
	if(inFile != NULL && outFile != NULL){ //recall that && means the first condition AND the second condition need to be true
		while(c!=EOF){
			c = fgetc(inFile);
			if(c != EOF){
				printf("DEBUG: read character %c\n", c);
				//MAKE SURE TO CHANGE c to UPPERCASE
				fputc(c, outFile);
			}
		}
	}else{
		printf("Could not open the input file!\n");
	}

	//don't forget to close the files when done!
	fclose(inFile);
	fclose(outFile);
	return 0;
}

