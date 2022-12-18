/* 25. WAP to convert a positive integer quantity to a roman numeral (i.e. 12 will be converted
to XIV).
CODE : */
#include<stdio.h>
int main()
{
int n;
printf("Enter the no. (Range = 1-39):");
scanf("%d", &n);
while( n!= 0 & n<40)
{
if(n >= 10)
{
printf("x");
n -= 10;
}
else if (n >= 9)
{
printf("ix");
n -= 9;
}
else if (n >= 5)
{
printf("v");
n -= 5;
}
else if (n >= 4)
{
printf("iv");
n -= 4;
}
else if (n >= 1)
{
printf("i");
n -= 1;
}
}
return 0;
}