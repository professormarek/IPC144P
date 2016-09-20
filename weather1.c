/*
this program gives the user advice about the weather
depending on the temperature outside
*/

#include <stdio.h>

int main(void){

  //declare varaiables (think about what pieces of information you need to represent)
  int temp;
  //get the temperature from the user
  printf("Please enter the outdoor temperature as a whole number in celsius: \n");
  scanf("%d", &temp);
  //decide on advice depending on the temperature
  if(temp < 0) 
    //tell the user to wear something warm if tempreature is less than 0
    printf("wear something warm\n");

  //the following statement is executed regarless of whether the condition is true or false
  printf("thank you for using weather app\n");

  return 0;
}
