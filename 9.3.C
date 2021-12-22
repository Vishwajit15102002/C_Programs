#include<stdio.h>
#include<conio.h>

int main()
{
int a[5],i,*p;
p=&a[0];

printf(" Enter any five values : ");
for(i=0;i<=4;i++)
{
    scanf("%d",&a[i]);
}
printf(" The value of array and its adddress is : \n");
for(i=0;i<=4;i++)
{
    printf(" The value of a[%d] is %d and the address of a[%d] is %u \n",i,a[i],i,p);
    p++;
}
return 0;
}