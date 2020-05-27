#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// 1. Write a program to input any character and check whether it is alphabet, digit or special character. 
int main ()
{
  char car; // Declaring the variable as a char
  printf("Enter any character: \n");
  scanf("%c", &car);
  if ((car>= 'a' && car<='z') || (car>= 'A' && car<= 'Z')) // Conditional to check if the character wrote it is on the alphabet
  {
    printf("It is alphabet");
  }
  else if (car>= '0' && car<='9') // Conditional to check if the character is a digit
  {
    printf("It is a digit");
  }
  else
  {
    printf("It is a special character");
  }
  return 0;
}

