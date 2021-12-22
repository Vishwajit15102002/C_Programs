#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
int n,x,sum=0;
printf(" Enter the value of n and x : ");
scanf("%d%d",&n,&x);
while(n>=0)
{
    sum = sum+pow(x,n); 
    n--;
}
printf(" The exponential is %d  ",sum);
return 0;
}