/* 2. Given an integer number, write a program that displays the number as follows:
First line: all digits
Second line: all except first digit
Third line: all except first two digits
…………
Last line: The last digit
Program Outcome
The number 5678 will be displayed as:
5 6 7 8
6 7 8
7 8
8 */

#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter the number:");
scanf("%d", &a);
b = a%1000;
c = b%100;
d = c%10;
printf("%d\n%d\n%d\n%d\n", a, b, c, d);
return 0;
}
