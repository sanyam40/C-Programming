/*5. Write a program in C to input the seconds and output the number of hours, minutes and
seconds.
Definition of Done:
• The program asks the user to input the total seconds.
• The programs outputs in the format as:
Hours:
Minutes:
Seconds:
• For example, if there are 9945 seconds, then:
Hours: 2
Minutes:45
Seconds:45
CODE : */
#include<stdio.h>
int main()
{
int sec, i, j, k;
printf("Enter number of seconds:");
scanf("%d", &sec);
i = 0;
j = 0;
k = 0;
while(sec != 0)
{
if(sec >= 3600)
{
i += 1;
sec -= 3600;
}
else if (sec >= 60)
{
j += 1;
sec -= 60;
}
else if (sec >= 1)
{
k += 1;
 sec -= 1;
}
}
printf("Hours : %d\n", i);
printf("Minutes : %d\n", j);
printf("Seconds : %d\n", k);
return 0;
}