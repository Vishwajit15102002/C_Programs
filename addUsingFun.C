#include<stdio.h>
#include<conio.h>

int add(int x,int y);

int main()
{
    int x,y,r;
    printf(" Enter two values : ");
    scanf("%d%d",&x,&y);
    r=add(x,y);
    printf(" Sum is %d",r);
    return 0;
}

int add(int x,int y)
{
    int z;
    z=x+y;
    return z;
}