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
printf(" The Matrix is : \n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf(" %d ",a[i][j]);
}
printf("\n");
}
return 0;
}