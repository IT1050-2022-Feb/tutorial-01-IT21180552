/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   float sub1,sub2,average;    //declaring variable 
   
   printf("Enter Subject 1 marks : ");  //get inputs
   scanf("%f",&sub1);
   
   printf("Enter Subject 2 marks : ");
   scanf("%f",&sub2);
   
   average=(sub1+sub2)/2.0;     //Calculate average mark
   
   printf("\nAverage of two marks : %.2f",average);    //print average mark
  
  return 0;
}

