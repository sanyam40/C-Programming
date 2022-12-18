/* 18. Write a program to find the factorial of a number using for loop
CODE : */

#include<stdio.h>
int main()
{
int n, i, j=1;
printf("Enter the no.:");
scanf("%d", &n);
for (i=1;i<=n;i++)
j=j*i;
printf("Factorial of %d : %d", n, j);
return 0;
}
