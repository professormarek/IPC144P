
/*
declare a Student struct in order to represent student data
store a class's worth of students in an array of Student objects
get student id's and the corresponding grades for a class of students 
display the student's id's and corresponding grades 
in the same order that the user entered them
Definition: an "object" is a variable of a struct type
*/

#include <stdio.h>

#define STUDENTS 3


//struct declaractions go before any compiler directives (ex. #include, #define)
//note the captial S
//a Student object represents one student
struct Student{
	long student_id;
	float grade;
}; //don't forget ;

//struct declarations go before they are used in main

int main(void){

	//store the students in an array of Student objects
	struct Student my_class[STUDENTS];

        int counter = 0;
        while (counter < STUDENTS){
                //get the grades from the user
                printf("currently entering student id %d: please enter id:", counter);
                scanf("%ld", &my_class[counter].student_id);
                printf("currently entering grade %d: please enter grade:", counter);
                scanf("%f", &my_class[counter].grade);
                counter = counter + 1; //counter++
        }

        //display the grades in the same order that they were entered

        counter = 0;
        while(counter < STUDENTS){
                //display the grade at the current index
                printf("Student ID: %ld Grade: %f\n", my_class[counter].student_id, my_class[counter].grade);
                counter++;
        }
        return 0 ;
}


