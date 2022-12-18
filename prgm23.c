/*23. That will read in a positive integer value and determine whether its prime or Fibonacci.
CODE : */
#include<stdio.h>
int main()
{
int a,b,c,d,num,i,j;
printf("Enter any number:");
scanf("%d",&d);
for(i=2;i<d;i++)
{
if(d%i==0)
{
break;
}
}
if(i==d)
{
printf("%d is a prime number",d);
}
else
{
printf("%d is not a prime number",d);
}
if((d==0)||(d==1))
 printf("\n%d is a Fibonacci term",d);
else
{
 a=0;
b=1;
 c=a+b;
 while(c<d)
 {
 a=b;
 b=c;
 c=a+b;
 }
 if(c==d)
 printf("\n%d is a Fibonacci term",d);
 else
 printf("\n%d is not a Fibonacci term",d);
}
return 0;
}