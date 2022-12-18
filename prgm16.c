/*16. Program to add numbers until the user enters zero */


#include <stdio.h>
int main()
{
 int num, sum = 0;
 do
 {
 printf("Enter a number: ");
 scanf("%d", &num);
 sum += num;
}
while(num != 0);
printf("Sum = %d",sum);
 return 0;
}
