#include<stdio.h>
#include<conio.h>

int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9},i,j;
    printf(" The 2d array in mattrix form is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    int b[3][3],p,q;
    printf(" Enter the numbers : ");
    for(p=0;p<3;p++)
    {
        for(q=0;q<3;q++)
        {
    scanf("%d",&b[p][q]);
    }
    }
    printf(" The matrix is \n");
    for(p=0;p<3;p++)
    {
        for(q=0;q<3;q++)
        {
            printf(" %d",b[p][q]);
        }
        printf("\n");
    }

    return 0;
}