/* 11.Write a program to salary of 10 employees of a company and also find and print the max
and min salary.
CODE : */
#include<stdio.h>
int main()
{
int arr[10];
int i, max, min;
for(i = 0; i < 10; i++)
{
printf("Enter salary(%d):",i + 1);
scanf("%d", &arr[i]);
}
max = arr[0];
min = arr[0];
for(i = 1; i < 10; i++)
{
if(arr[i] > max)
max = arr[i];
if(arr[i] < min)
min = arr[i];
}
printf("Maximum=%d\nMinimum=%d", max, min);
return 0;
}