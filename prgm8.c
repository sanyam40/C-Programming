/*8. Write a program to check whether a triangle is valid or not, when the three angles of the
triangle are entered through the keyboard. A triangle is valid if the sum of all the three
angles is equal to 180 degrees.
CODE : */
#include <stdio.h>
int main()
{
 int a, b, c, sum;
 printf("Enter value of angles of triangle:\n");
 scanf("%d %d %d", &a, &b, &c);
 sum = (a+b+c);
 if (sum == 180)
 {
 printf("\nTriangle is valid!!");
 }
 else
 {
 printf("\nTriangle is not valid");
 }
 return 0;
}