#include<stdio.h>
#include<conio.h>

int main()
{
int sum=0,i,a[10]={1,2,3,4,5,6,7,8,9,10};
for(i=0;i<=9;i++)
{
sum=sum+a[i];
}
printf("The addition is %d ",sum);
return 0;
}