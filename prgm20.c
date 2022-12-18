/* 20. 55555
4444
333
22
1
DoD 1: The program does not take any input.
DoD 2: The above mentioned pattern should be printed as the output.
CODE : */
#include<stdio.h>
int main()
{
int a,i,j;
a=5;
for(i=1;i<=5;i++)
{
for(j=5;j>=i;j--)
{
printf("%d",a);
}
printf("\n");
a--;
}
return 0;
}