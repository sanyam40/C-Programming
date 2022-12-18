/*1. Write a program that reads a floating-point number and then displays the right-most digit of the
integral part of the number
Test case:
Enter two operands: 32.5
O/P: 2 */

#include<stdio.h>
int main(){
int A,B;
float fval;
printf("Enter is value::");
scanf("%f",&fval);
A=fval;
B=A%10;
 printf("Right most of ::%d is ::%d\n\n",A,B);
}