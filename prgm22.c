/*22. To find the sum of individual digits of a positive integer and test given number is
palindrome.
CODE : */
#include <stdio.h>
int main()
{
 int a,rev=0,rem,real;
 printf("Enter any number:");
 scanf("%d", &a);
 real=a;
 while (a!=0)
{
 rem=a%10;
 rev=rev*10+rem;
 a/=10;
 }
 if (real==rev)
 printf("%d is a palindrome.",real);
 else
 printf("%d is not a palindrome.",real);
return 0;
}