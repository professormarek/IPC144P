/*
this is a multi line comment
comments are used to document programs (for human use)
multi line comments begin with the slash star
and end with the star slash below

everything within is ignored by the compiler

typically, at the start of each program we should write a short description of what the program is for and what it does


This program asks the user to enter two whole numbers
adds the numbers up
and displays the result to the user
*/

//this is a single line comment - everything following the // is ignored until the end of the line

//bring in the stdio.h library so we can use printf and scanf
#include <stdio.h>


//each c-program will have a main function
//execution starts with the first line of the main functino
int main(void){
  //declare a variable for each piece of information in the task
  //first number
  int a;
  //second number
  int b;
  //store the sum
  int sum;

  //get the first number from the user
  //ask the user to enter a number
  printf("Enter a whole number: ");
  //use scanf to copy the bytes the user entered into our variable
  scanf("%d", &a);

  //get the second number
  printf("Enter a second whole number: ");
  scanf("%d", &b);

  //compute the sum
  sum = a + b;

  //display the sum to the user
  printf("The result of the addition is: %d \n", sum); 

  //tells the function (program) that it's finished
  return 0;
}


