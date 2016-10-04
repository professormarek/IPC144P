
/*
get student id's and the corresponding grades for a class of students 
from the user and store them
when the user is finished entering grades
display the student's id's and corresponding grades \
in the same order that the user entered them
*/

#include <stdio.h>

/*
when you use a value multiple times in the program (ex. array size)
it's good to declare a constant instead of using literal values ex.6
declare constants after your #include and before main()
*/
//REMEMBER: no ';' semicolon after the number below
#define STUDENTS 3

int main(void){
        //declare parallel arrays to store id's and grades
	long student_id[STUDENTS];
        float grade[STUDENTS];

        int counter = 0;
        while (counter < STUDENTS){
                //get the grades from the user
                printf("currently entering student id %d: please enter id:", counter);
                scanf("%ld", &student_id[counter]);
                printf("currently entering grade %d: please enter grade:", counter);
                scanf("%f", &grade[counter]);
                counter = counter + 1; //counter++
        }

        //display the grades in the same order that they were entered

        counter = 0;
        while(counter < STUDENTS){
                //display the grade at the current index
                printf("Student ID: %ld Grade: %f\n", student_id[counter], grade[counter]);
                counter++;
        }
        return 0 ;
}


