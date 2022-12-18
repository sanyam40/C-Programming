/*9. Write a program in C to read the age and display whether the candidate is eligible to vote
or not.
Definition of Done:
• The program should ask the user to enter an integer. If it is floating, ask the user to
enter appropriate number
• The program should use if-else statement
CODE : */
#include <stdio.h>
int main()
{
 float age;
 int a;
 repeat:
 printf("Enter age of candidate:");
 scanf("%f", &age);
 a = age;
 if (a == age)
 {
 if (age >= 18)
 {
 printf("Eligible to vote!!");
 }
 else
 {
 printf("Not eligible to vote!!");
 }
 }
 else
 {
 printf("Enter a valid value for 'age' in form of an integer \n");
 goto repeat;
 }
 return 0;
}
