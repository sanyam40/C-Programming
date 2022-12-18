/* 50. Write a program to read two complex numbers and perform addition, subtraction of these two
complex numbers.
a) Define a structure “complex”.
b) Display the result */

#include<stdio.h>
struct num
{
int a;
int b;
}
s;
void main()
{
int add,sub;
printf("enter 1st no.: \n");
scanf("%d",&s.a);
printf("enter 2nd no.: \n");
scanf("%d",&s.b);
add=s.a+s.b;
sub=s.a-s.b;
printf("addition is = %d\n",add);
printf("subtraction is = %d\n",sub);
}