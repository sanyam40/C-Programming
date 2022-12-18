/* 17. Program to print the sum of 10 natural numbers using while loop
CODE : */
#include <stdio.h>
int main()
{
int i=0, sum=0, n=10;
do
{
sum=sum+i;
++i;
}
while(i<=n);
printf("Sum of first ten natural no is:%d",sum);
return 0;
}
