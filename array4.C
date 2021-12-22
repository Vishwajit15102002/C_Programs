// smaller number.
#include<stdio.h>
#include<conio.h>

int main()
{
int small,i,a[3];
printf(" Enter three numbers : ");
for(i=0;i<=2;i++)
{
scanf("%d",&a[i]);
}
small=a[0];
for(i=1;i<=2;i++)
{
    if(a[i]<small)
    {
        small=a[i];
    }
}
printf(" The smaller number is %d ",small);
return 0;
}