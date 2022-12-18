/* 44. To convert each character including blank spaces to its ASCII equivalent.*/ 


#include<stdio.h>
int main()
{
int str_len,i;
char c;
char str[100];
printf("Enter a String:");
 gets(str);

 str_len=sizeof(str);

 for (i=0;str[i]!='\0';i++)
 {
 c=str[i];
 int ascii;
 ascii=c;
 printf("%d\n",ascii);
 }

return 0;
}
