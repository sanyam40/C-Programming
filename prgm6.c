/*6. While purchasing certain items, a discount of 10% is offered if the quantity purchased is
more than 1000. If quantity and price per item are input through the keyboard, write a
program to calculate the total expenses.
CODE : */
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the total quantity:");
scanf("%d",&a);
printf("Price of item:");
scanf("%d",&b);
if(a>=1000)
{
c=(a*b)-(a*b)*0.1;
printf("As the quantity exceed 1000 the total amount is %d",c);
}
else
{
printf("The amount is %d",a*b);
}
return 0;
}