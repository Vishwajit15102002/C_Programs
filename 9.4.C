#include<stdio.h>
#include<conio.h>

int main()
{
char a[25],*p;
int i;
p=&a[0];

printf(" Enter your First Name : ");
gets(a);

for(i=0;a[i]!='\0';i++)
{
    printf(" %c address is %u \n",*p,p);
    p++;
}
return 0;
}