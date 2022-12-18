/*7. The marks obtained by a student in 5 different subjects are input through the keyboard. The
student gets a division as per the following rules: Percentage above or equal to 60 - First
division Percentage between 50 and 59 - Second division Percentage between 40 and 49 -
Third division Percentage less than 40 - Fail Write a program to calculate the division
obtained by the student.
CODE : */
#include<stdio.h>
int main()
{
int a, b, c, d, e, percent;
printf("Enter marks for the subjects:\n");
scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
percent = (a+b+c+d+e)*100/500;
printf("Percentage:%d",percent);
if (percent>=60)
{
printf("\nFirst Division!!");
}
else if (percent>=50 && percent<60)
{
printf("\nSecond Division!!");
}
else if (percent>=40 && percent<50)
{
printf("\nThird Division!!");
}
else if (percent<40)
{
printf("\nStudent failed.");
}
return 0;
}