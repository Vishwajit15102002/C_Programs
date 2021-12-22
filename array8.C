// search number in array.
#include<stdio.h>
#include<conio.h>

int main()
{
int c=0,i,x,a[10];
printf(" Enter ten numbers : ");
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
}
printf("\n");
printf(" Enter the number that you want to search : ");
scanf("%d",&x);

for(i=0;i<=9;i++)
{
    if(x==a[i])
    {
        c++;
    }
}

if(c==0)
{
    printf(" The number %d not found ",x);

}
else
{
    printf(" The number %d found %d times ",x,c);
}
return 0;
}
