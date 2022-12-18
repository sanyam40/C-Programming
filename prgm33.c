/* 33.C program to demonstrate example of double pointer (pointer to pointer). */
#include <stdio.h>
int main()
{
 int i = 23, *ptr1, **ptr2;
 ptr1 = &i;
 ptr2 = &ptr1;
 printf("The value of i = %d ", i);
 printf("\nThe value of ptr = %d ", *ptr1);
 printf("\nThe value of ptrptr = %d ", **ptr2);
 return 0;
}
