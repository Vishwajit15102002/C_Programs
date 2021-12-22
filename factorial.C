// Finding Factorial using while loop.
#include<stdio.h>
#include<conio.h>

int main()
{
int f=1,n,c=1;
printf(" Enter the number : ");
scanf("%d",&n);          //  n=10
while(c<=n)             //   c=1 t   c=2 t   c=3 t
{
    f=f*c;              //   1*1     1*2     2*3
    c++;                //    2      3        4

}

printf(" The factorial is %d ",f);
return 0;
}