/*46. To delete a specified character from a string
Eg. Input : PROGRAMMING, A Output : PROGRMMING
CODE : */
#include<stdio.h>
#include<string.h>
int main()
{
char s[100], ch;
int i, len, j;
printf("Enter the string : ");
gets(s);
printf("Enter the character you want to remove : ");
scanf("%c", &ch);
len = strlen(s);
for (i = 0; i < len; i++)
{
if(s[i] == ch)
{
for (j = i; j < len; j++)
{
s[j] = s[j+1];
}
len--;
i--;
}
}
printf("The string after the removing of %c is : %s",ch,s);
return 0;
}