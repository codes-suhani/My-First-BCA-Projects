#include <stdio.h>

/*
  BCA 1st Semester Project 
  Program: Even or Odd Number Checker 
*/
int main () {
  int number;
      printf("Enter any integer number:");
      scanf("%d",&number);
  if (number %2 == 0) {
      printf("The number %d is EVEN!\n", number);
} else {
      printf("The number %d is ODD!\n", number);
  }
      printf("Thanks for checking out my code!\n");
  return 0;
}



