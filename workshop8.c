#include <stdio.h>

#define SZ 4

struct Student{
        long id;
        double avg;
};

void displayStudent(struct Student s){
        printf("Student's id: %ld, student's average grade: %.1lf\n", s.id, s.avg);
}

/*
TASK 1:
change this function signature or header from using array[] notation to using pointer * notation
hint: you only need to change the funciton header
*/
void displayGrades(float gr[]){
        printf("Displaying Grades:\n");
        for(int i = 0; i < SZ; i++){
                printf("grade: %d is %.1f\n", i, gr[i]);

        }
}

/*
computes the average grade and stores it in the avg field of the Student argument
TASK 2: this function doesn't work - what do you have to change here? fix it!
*/
void computeAverage(float gr[], struct Student s){
        double sum = 0.0;
        for(int i = 0 ; i < SZ ; i++){
                sum += gr[i];
        }
        s.avg = sum / SZ;
}
int main(void){
        float grades[SZ] = {45.3, 89.1, 99.9, 0.0};
        struct Student you = {7657890, 0.0};
        //TASK 3: call the displayGrades funciton and pass the grades array as an argument

        //display the original student data
        displayStudent(you);
        //call the computeAverage function and pass the grades array and the Student object
        /*TASK 4: once you have changed the computeAverage funciton (TASK 2) change the line below to pass the student by address*/
        computeAverage(grades, you);
        //display the student data again. Has it changed?
        displayStudent(you);
        printf("Program Complete!\n");
        return 0;
}

/*
If implemented correctly, your program should compile and produce the following output when it runs:

Displaying Grades:
grade: 0 is 45.3
grade: 1 is 89.1
grade: 2 is 99.9
grade: 3 is 0.0
Student's id: 7657890, student's average grade: 0.0
Student's id: 7657890, student's average grade: 58.6
Program Complete!

*/

/*
make sure you create a typescript showing:
1) your code (use cat)
2) your code compiling (use clang)
3) the correct output when you run your compiled program (a.out)
*/

