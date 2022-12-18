/*10. Write a program in C to find the roots of a quadratic equation.
Definition of Done:
• Firstly, the program shall display the conditions of no solution, real, and imaginary roots.
• Then it shall ask the user to enter the values of A,B,C.
• Then, it shall output as:
• “The equation …….. contains …….. roots which are ……..” or “The equation……… has
no solution”.
CODE : */

# include<stdio.h>
# include<math.h>
int main ()
{
 double a, b, c, d, r1, r2;
 printf("Enter the values of a b c:");
 scanf("%lf %lf %lf", &a, &b, &c);
 d = (b*b) - (4*a*c);
 if (d > 0)
 {
 r1 = ((-b+sqrt(d))/(2*a));
 r2 = ((-b-sqrt(d))/(2*a));
 printf("Roots of equation are: %lf %lf", r1, r2);
 }
 else if(d == 0)
 {
 r1 = (-b/(2*a));
 printf("Roots of equation are: %lf %lf", r1, r1);
 }
 else
 {
 r1 = -b/(2*a);
 r2 = sqrt(-d/(2*a));
 printf("Roots of equation are: %lf %lf", r1, r2);
 }
 return 0;
}