/*3. Write a program in C to print the alphabet E, using dollar ($)
Definition of Done: The output contains the height of 7 characters and width of 6 and 5
characters. */

#include<stdio.h>
void main()
{
int i,j,k;
for(i=1;i<=7;i++)
{
printf("$");
if(i==1 || i==7)
{
for(k=1;k<=5;k++)
{
printf("$");
}
}
else if(i==4)
{
for(k=1;k<=4;k++)
{
printf("$");
}
}
printf("\n");
}
}