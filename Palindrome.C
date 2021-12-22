#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
int n,n1,d,r=0;
printf(" Enter five digit number : "); 
scanf("%d",&n);
n1=n;
while(n>0)
{
d=n%10;    
r=r*10+d;
n=n/10;
}
if(r==n1)
{
    printf(" Palindrome ");
}
else
{
printf(" Not Palindrome ");
}
return 0;
}