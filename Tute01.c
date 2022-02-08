/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1, mark2, total;
  float average;
  
  printf("Enter mark one :");
  scanf("%d", &mark1);
  printf("Enter mark two :");
  scanf("%d", &mark2);

  total = mark1 + mark2;
  average = total / 2.0;

  printf("\nAverage : %.2f", average);
  

  
  return 0;
}

