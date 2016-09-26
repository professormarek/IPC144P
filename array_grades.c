
/*
get several (6) grades from the user and store them
then when the user is finished entering grades
display the entered grades in the same order that the user entered them
*/

#include <stdio.h>

int main(void){
        //declare variables to store grades
        float grade[6];

        int counter = 0;
        while (counter < 6){
                //get the grades from the user
                printf("currently entering grade %d: please enter grade:", counter);
                scanf("%f", &grade[counter]);
                counter = counter + 1; //counter++
        }

        //display the grades in the same order that they were entered

        counter = 0;
        while(counter < 6){
                //display the grade at the current index
                printf("Grade %d is %f\n", counter, grade[counter]);
                counter++;
        }
        return 0 ;
}


