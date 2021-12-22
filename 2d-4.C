// Displaying Odd numbers.
#include<stdio.h>
#include<conio.h>

int main()
{
int i,j,a[3][3];
printf(" Enter the numbers : ");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
    scanf("%d",&a[i][j]);
}
}
printf("The odd numbers are : \n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
if(a[i][j]%2!=0)
{
    printf("%d \t ",a[i][j]);
}
}
}
return 0;
}