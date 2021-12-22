#include<stdio.h>
#include<conio.h>

int main()
{
int i,a[5];
printf(" Enter five numbers : ");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
printf(" The entered numbers are : \n ");
for(i=0;i<=4;i++)
{
printf(" a[%d] is %d \n ",i,a[i]);
}
return 0;
}