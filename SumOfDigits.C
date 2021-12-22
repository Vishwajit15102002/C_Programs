#include<stdio.h>
#include<conio.h>

int main()
{
int n,d,sum=0;
printf(" Enter the number : "); 
scanf("%d",&n);
while(n>0)
{
d=n%10;    
sum+=d;
n=n/10;
}
printf(" The sum of number of digits in given number is %d ",sum);
return 0;
}