/* 48. Write a program to increase the salary depending on the number of hours of work per day as
follows:
Hours of work per day 8 10 >=12
Increase in salary $50 $100 $150
DODs
a) Write a structure to store the names, salary and hours of work per day of 10 employees in
a company.
b) Print the name of all the employees along with their final salaries */

#include<stdio.h>
struct emp
{
char name[50];
int salary, hours;
}
s[10];
void main()
{
int i;
for(i=1;i<=10;i++)
 {
 printf("Enter details of employ:\n");
 printf("Enter name:");
 scanf("%s",s[i].name);
 printf("Enter salary:");
 scanf("%d",&s[i].salary);
 printf("Enter no. of hours:");
 scanf("%d",&s[i].hours);
 if(s[i].hours==8)
 {
 printf("Increase is salary $50 of %s\n",s[i].name);
 continue;
 }
 if(s[i].hours ==10)
 {
 printf("Increase in salary $100 of %s\n",s[i].name);
 continue;
 }
 if(s[i].hours>=12)
 {
 printf("Increase in salary $150 of %s\n",s[i].name);
 continue;
 }
 else
 {
 printf("No increase in salary\n");
 }
 }
}
