/*19. Write a program to print the following pattern:
a) 1
1 2
 1 2 3
 1 2 3 4
 DoD 1: The number should be given by the user.
 DoD 2: The program should check if the number is a positive natural number.
 DoD 3: The factorial of that number should be printed as the output.
CODE : */
#include<stdio.h>
int main()
{
int n, i, j=1, k;
printf("Enter the no.:");
scanf("%d", &n);
for (i=1;i<=n;i++)
{
for(k=1;k<=i;k++)
{
printf("%d ", k);
}
printf("\n");
}
for (i=1;i<=n;i++)
j=j*i;
printf("Factorial of %d : %d", n, j);
return 0;
}