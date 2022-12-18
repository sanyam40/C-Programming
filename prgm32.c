/* 32. C program to create, initialize, assign and access a pointer variable. */
#include<stdio.h>
int main()
{
 char ch, *pch;
 printf("Enter a Character:");
 scanf("%c", &ch);
 pch = &ch;
 printf("Value of ch: %c\n",ch);
 printf("Address of ch: %p\n",&ch);
 printf("Value of ch: %c\n",*pch);
 printf("Address of ch: %p",pch);

return 0;
}