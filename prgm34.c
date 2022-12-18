/*34.C program to swap two numbers using pointers.*/
#include <stdio.h>
int swap(int*, int*);
int main()
{
 int x, y;
 printf("Enter the value of x and y:\n");
 scanf("%d%d",&x,&y);
 printf("Before Swapping\n x = %d\n y = %d\n", x, y);
 swap(&x, &y);
 printf("After Swapping\n x = %d\n y = %d\n", x, y);
 return 0;
}
int swap(int *a, int *b)
{
 int t;
 t = *b;
 *b = *a;
 *a = t;
 return t;
}
