#include<stdio.h>
#include<conio.h>

int matrix(int a[3][3]);

int main()
{
    int x,a[3][3]={1,2,3,4,5,6,7,8,9};
  x=matrix(a);
printf("%d",x);

   return 0;
}

int matrix(int a[3][3])
{
int p,i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
   p=a[i][j];
}
printf("\n");
}

    return p;
}