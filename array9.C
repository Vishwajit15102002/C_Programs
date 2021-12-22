// Fibonacci series.
#include<stdio.h>
#include<conio.h>

int main()
{
int i,a[10];
a[0]=0;
a[1]=1;
for(i=2;i<=9;i++)
{
    a[i]=a[i-1]+a[i-2];
}
printf(" The series is : ");
for(i=0;i<=9;i++)
{
    printf("%d \n ",a[i]);
}
return 0;
}