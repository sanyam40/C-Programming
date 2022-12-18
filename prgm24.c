/*24. WAP to calculate the sum of every third integer, beginning with i=2 ( i.e. calculate the sum
2+5+8+11+………) for all values of i less than 100.
CODE : */
#include<stdio.h>
int main()
{
int i,sum=0;
for(i=2;i<=100;i=i+3)
{
sum=sum+i;
}
printf("Sum=%d",sum);
return 0;
}
