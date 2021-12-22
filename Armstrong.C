#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
int n,n1,d,sum=0;
printf(" Enter three digit number : "); 
scanf("%d",&n);
n1=n;
while(n>0)
{
d=n%10;    
sum+=pow(d,3);
n=n/10;
}
if(sum==n1)
{
    printf(" Armstrong ");
}
else
{
printf(" Not Armstrong ");
}
return 0;
}