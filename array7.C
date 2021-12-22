// Addition of odd numbers
#include<stdio.h>
#include<conio.h>

int main()
{
int sum=0,i,a[10];
printf(" Enter ten numbers : ");
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=9;i++)
{
if(a[i]%2!=0)
{
   sum=sum+a[i];
}
}
printf(" The sum of odd numbers is %d ",sum);
return 0;
}