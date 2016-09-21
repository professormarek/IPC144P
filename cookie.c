/*
this program will repeatedly ask the user to accept a cookie until they agree
many annoying apps and web pages that bug you work the same way!
*/

#include <stdio.h>

int main(void){
	//start by assuming the user does not agree
	int userResponse = 0;
        //notice the condition inside the round braces ()
	while(userResponse != 1){
		//the code between the { } will repeat as long as the condition above is true
		printf("Do you want a cookie? Press 1 for YES, 0 for NO:");
		//get the user's response
		scanf("%d", &userResponse);
	}
	//the following line will execute once the while loop is done (condition becomes false)	
	printf("Cookie Accepted (Mwa ha ha ha)\n");
	return 0;
}
