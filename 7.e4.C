#include<stdio.h>
#include<conio.h>

int main()
{
    int a[3][3],i,j,small;
    printf(" Enter the numbers : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
    small=a[0][0];
    for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(a[i][j]<small)
        {
            small=a[i][j];
        }
    }
}
   printf(" The smaller number is %d ",small);
    return 0;
}