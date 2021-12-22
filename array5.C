// larger number
#include<stdio.h>
#include<conio.h>

int main()
{
int large,i,a[3];
printf(" Enter three numbers : ");
for(i=0;i<=2;i++)
{
scanf("%d",&a[i]);
}
large=a[0];
for(i=1;i<=2;i++)
{
    if(a[i]>large)
    {
        large=a[i];
    }
}
printf(" The largest number is %d ",large);
return 0;
}