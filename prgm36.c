/*36. Write a C program to find the largest number in an array.
a) DoD 1: The size of the array should be given by the user. It has to be 1-D array.
b) DoD 2: The elements of the array should also be given by the user.
c) DoD 3: The largest element of the array should be printed as an output.
CODE :*/
#include<stdio.h>
int main()
{
int arr[50], size, i, largest;
printf("Enter size of array:");
scanf("%d", &size);
printf("Enter %d elements of the array:", size);
for (i = 0; i < size; i++)
scanf("%d", &arr[i]);
largest = arr[0];
for (i = 1; i < size; i++)
{
if (largest < arr[i])
largest = arr[i];
}
printf("Largest element present in thegiven array is: %d", largest);
return 0;
}