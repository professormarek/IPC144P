/*
this program demonstrates counting to 10 using a while loop
*/

#include <stdio.h>

int main(void){
  int count = 1; // initialize the count to 1
  while(count <= 1000000){
    //these statements will be repeated as long as the condition above is TRUE (see notes)
    printf("number is: %d\n", count);
    count = count + 1;
    //shorthand 1: count+=1
    //shorthand 2: count++    
  }

  return 0;
}
