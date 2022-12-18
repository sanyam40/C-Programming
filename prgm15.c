/*15. Find factorial of a number using while loop
CODE : */ 

#include <stdio.h>
int main()
{
 int n,i,f;
 f=i=1;
 printf("Enter the number to find factorial: ");
 scanf("%d",&n);
 while(i<=n)
 {
 f*=i;
 i++;
 }
 printf("The Factorial of %d is : %d",n,f);
 return 0;
}