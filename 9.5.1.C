//  swapping numbers using call by reference
#include<stdio.h>
#include<conio.h>

int swap(int *p, int *q);
int main()
{
int a,b;
printf(" Enter two numbers : ");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf(" \nIn main \n");
printf("\nThe value of a is %d",a);
printf("\nThe value of b is %d",b);

return 0;
}

int swap(int *p,int *q)
{
int c;
c=*p;
*p=*q;
*q=c;
printf(" After swapping \n");
printf("\n The value of x after swapping is %d",*p);
printf("\n The value of y after swapping is %d\n",*q);

return 0;
}