#include<stdio.h>
#include<conio.h>

int main()
{
int avg,sum=0,i,n,a[100];
printf(" How many numbers you want : ");
scanf("%d",&n);
printf(" Enter %d numbers : ",n);
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n-1;i++)
{
sum=sum+a[i];
}
avg=sum/n;
printf(" The average of numbers is %d ",avg);
return 0;
}