// Finding mmaximum in three.
#include<stdio.h>
#include<conio.h>

int main()
{
int a,b,c; 
printf(" Enter three number : ");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
    if(a>c)
    {
        printf(" %d is the maximum",a);

    }
    else
    {
        printf(" %d is the maximum",c);
    } 
}
else
{
    if(b>c)
    {
        printf(" %d is maximum ",b);
    }
    else
    {
        printf(" %d is maximum ",c);
    }
}
return 0;
}