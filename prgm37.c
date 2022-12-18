/*37. Write a C program to transpose the matrix.
 DoD 1: The order of the matrix should be provided by the user.
 DoD 2 : The elements of the matrix should also be provided by the user.
 DoD 3: The original matrix should be displayed.
 DoD 4: The transposed matrix should then be displayed.
CODE : */
#include<stdio.h>
int main()
{
int a[10][10],i,j,n,m;
printf("Enter the order of the matrix:");
scanf("%d %d",&n,&m);
printf("Enter the elements of the matrix \n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
}
printf("\n");
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
printf("Transpose of the matrix is : \n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
 {
printf("%d ",a[j][i]);
 }
 printf("\n");
}
return 0;
}