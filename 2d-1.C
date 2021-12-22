#include<stdio.h>
#include<conio.h>

int main()
{
int i,j,a[3][3]={10,20,30,30,20,10,30,20,10};
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