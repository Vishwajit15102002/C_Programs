#include<stdio.h>
#include<conio.h>

int main()
{
int small,i,j,a[3][3];
printf(" Enter the numbers : ");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
    scanf("%d",&a[i][j]);
}
}
small=a[0][0];
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
   if(a[i][j]<small)
   {
       small=a[i][j];
   }
}
}
printf(" The smallest number is %d ",small);
return 0;
}