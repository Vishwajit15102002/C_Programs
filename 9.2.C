#include<stdio.h>
#include<conio.h>

int main()
{
int x[10]={1,2},i,*p;
char a[10]={'o','m'},*r;
float b[10]={1.1,2.2},*q;
p=&x[0];
r=&a[0];
q=&b[0];

for(i=0;i<=1;i++)
{
printf(" The address of %d is %u \n",*p,p);
p++;
}
printf(" The size of integer pointer is 4 byte \n");
for(i=0;a[i]!='\0';i++)
{
printf(" The address of %c is %u \n",*r,r);
r++;
}
printf(" The size of character pointer is 1 byte \n");
for(i=0;i<=1;i++)
{
printf(" The address of %f is %u \n",*q,q);
q++; 
}
printf(" The size of float pointer is 4 byte \n");

return 0;
}