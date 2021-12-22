#include<stdio.h>
#include<conio.h>

int main()
{
int x=10,y=20;
int *p,*q;
p=&x;
q=&y;


printf(" The address of x is %u \n",&x);
printf(" The address of x is %u \n",p);
printf(" The address of y is %u \n",q);
printf(" The vale of x is %d \n",*p);
printf(" The value of x is %d \n",x);



return 0;
}