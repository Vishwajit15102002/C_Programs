// Finding maximum in two numbers
#include<stdio.h>
#include<conio.h>

int main()
{
int a,b;
printf(" Enter two numbers : ");
scanf("%d%d",&a,&b);
if(a>b)
{
    printf("The number %d is maximum ",a);
}
else
{
printf(" The number %d is maximum ",b);
}
return 0;
}