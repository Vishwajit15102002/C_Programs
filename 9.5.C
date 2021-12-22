// swapping numbers using call by value
#include<stdio.h>
#include<conio.h>

int swap(int x, int y);
int main()
{
int a,b;
printf(" Enter two numbers : ");
scanf("%d%d",&a,&b);
swap(a,b);
printf(" \nIn main \n");
printf("\nThe value of a is %d",a);
printf("\nThe value of b is %d",b);

return 0;
}

int swap(int x,int y)
{
int c;
c=x;
x=y;
y=c;
printf(" After swapping \n");
printf("\n The value of x after swapping is %d",x);
printf("\n The value of y after swapping is %d\n",y);

return 0;
}