/*35.C program to reverse an array using pointers.*/
#include<stdio.h>
int revarray(int *p, int n)
{
int *first = p;
int *last = p+n-1;
while(first<last)
{
int temp = *first;
*first = *last;
*last = temp;
first++;
last--;
}
printf("Reversed array elements are: ");
for(int i=0; i<n; i++)
printf("%d ", *p++);
return 0;
}
int main()
{
int n;
printf("Enter n: ");
scanf("%d", &n);
int a[n];
printf("Enter %d numbers: ",n);
for(int i=0; i<n; i++)
scanf("%d", &a[i]);
revarray(a, n);
return 0;
}