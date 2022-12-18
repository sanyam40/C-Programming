/*14. Write a C program using switch case to display grade of students based on the total marks obtained by
the student in five subjects
Here is the range of Grades:
Marks >= 90 : Grade A
Marks >= 70 && < 90 : Grade B
Marks >= 50 && < 70 : Grade C
Marks < 50 : Grade D
Marks<50 : Fail
Program Outcome
Enter marks of 5 subjects
97 89 78 87 68
Grade : B
Code */
#include<stdio.h>
int main()
{
int a, b, c, d, e, percent;
printf("Enter marks for the subjects:\n");
scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
percent = (a+b+c+d+e)*100/500;
printf("Percentage:%d",percent);
if (percent>=90)
{
printf("\nGRADE:A");
}
else if (percent>=70 && percent<90)
{
printf("\nGRADE:B");
}
else if (percent>=50 && percent<70)
{
printf("\nGRADE:C");
}
else if (percent<50)
{
printf("\nGRADE:D");
printf("\nStudent failed.");
}
return 0;