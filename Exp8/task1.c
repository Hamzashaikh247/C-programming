/*
    Exp. No.8 : TASK-1
    Title: WAP to find the length of a string without using library function.
    Name: Shaikh Mohd Hamza Anis
    Class & Div: Mech-B
  
  UIN: 241M003
    */

#include <stdio.h>

int main() {

  char str[100];
  int length = 0;

  printf("Enter a string: ");
  scanf("%s", str);

  while (str[length] != '\0') {
   length++;
  }

  printf("The length of the string is: %d\n", length);
  return 0;
}

/*  **OUTPUT**

Enter a string: Huzaifa
The length of the string is: 7

*/
