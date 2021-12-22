#include<stdio.h>
#include<conio.h>

int sum(int a[]);

int main()
{
int r;
r=sum(a[]);
printf(" The sum is %d ",r);
return 0;
}

int sum(int a[])
{
int sum=0,i,a[2];
printf(" Enter two numbers : ");
for(i=0;i<=1;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<=1;i++)
{
    sum=sum+a[i];
}
return sum;
}