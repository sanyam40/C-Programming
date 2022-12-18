/*13. A character is entered through keyboard. Write a C program and its algorithm to determine whether the
character entered is a capital letter, a small case letter, a digit or a special symbol using switch case. The
following table shows the range of ASCII values for various characters.
Characters ASCII values
A – Z 65 – 90
a – z 97 – 122
0 – 9 48 – 57
Special symbols 0 – 47, 58 – 64, 91 – 96, 123 – 127 */

#include <stdio.h>
int main()
{
char ch;
int ascii;
printf("Enter a character:");
scanf("%c", &ch);
ascii = ch;
printf("ASCII value of %c : %d \n", ch, ascii);
if (ascii >=65 && ascii <= 90)
{
printf("It is a capital letter!!");
}
else if (ascii >=97 && ascii <= 122)
{
printf("It is a small case letter!!");
}
else if (ascii >= 48 && ascii <= 57)
{
printf("It is an integer!!");
}
else if (ascii >= 0 && ascii <= 47 || ascii >= 58 && ascii <= 64 || ascii >= 91 &&
ascii <= 96 || ascii >= 123 && ascii <= 127)
{
printf("It is a special symbol!!");
}
return 0;
}