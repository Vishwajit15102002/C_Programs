#include<stdio.h>
#include<conio.h>

int main()
{
int sum=0,i,j,a[3][3];
printf(" Enter the numbers : ");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
    scanf("%d",&a[i][j]);
}
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
sum=sum+a[i][j];
}
}
printf("The sum of numbers in 2d-array is %d ",sum);
return 0;
}