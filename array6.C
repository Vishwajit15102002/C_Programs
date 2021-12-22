// Even numbers
#include<stdio.h>
#include<conio.h>

int main()
{
int i,a[10];
printf(" Enter ten numbers : ");
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=9;i++)
{
if(a[i]%2==0)
{
   printf(" The number %d is even \n ",a[i]);
}
if(a[i]%2!=0)
{
   printf(" The number %d is odd \n ",a[i]);
}
}
return 0;
}