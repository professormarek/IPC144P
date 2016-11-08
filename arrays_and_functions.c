/* this program demonstrates passing arrays to functions */
#include <stdio.h>

#define SIZE 3

/* this function accepts an array argument
note: no size is provided here in the []
 */
void displayGrades(float gr[]){
	for(int i = 0; i < SIZE; i++){
		printf("the grade at index %d is %.1f\n", i, gr[i]);
	}
}

//write a function to test whether arrays are passed by value or address
//notice that we can change the function header to editGrades(float *gr) with no further changes!
void editGrades(float gr[]){
	for(int i = 0; i < SIZE; i++){
		printf("Enter a new value for grade %d:", i);
		scanf("%f", &gr[i]);
	}	
}

int main(void){
	float grades[SIZE] = {66.7, 6.7, 83.7};

	printf("Displaying Grades:\n");
	//call a function to display the grades
	displayGrades(grades);

	printf("Please enter new grades: \n");
	//call our editGrades function to let the user enter new grades
	editGrades(grades);

	printf("The changed(?) grades are: \n");
	displayGrades(grades);

	printf("Wow arrays are always passed by address!\n");
	printf("Program complete\n");
	return 0;
}
