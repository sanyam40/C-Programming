/* 12. Write a C Program with an algorithm and flowchart to make a simple calculator performing +,-
,/,* using switch-case. The program takes two integer operands and one operator from the user,
performs the operation and then prints the result.
Code */

#include<stdio.h>
int main()
{
char op;
int a, b;
printf("Enter a choice [+, -, *, /]: ");
scanf("%c", &op);
printf("Enter the numbers: \n");
scanf("%d %d", &a, &b);
switch (op)
{
case '+':
printf("%d + %d = %d", a, b, a + b);
break;
case '-':
printf("%d - %d = %d", a, b, a - b);
break;
case '*':
printf("%d * %d = %d", a, b, a *b);
break;
case '/':
printf("%d / %d = %d", a, b, a / b);
break;
default:
printf("Enter a valid choice!!");
break;
}
}