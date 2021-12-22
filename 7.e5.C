#include<stdio.h>
#include<conio.h>

int main()
{
    int a[3][3],i,j,x,c=0;
    printf(" Enter the numbers : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf(" Enter the number you want to find : ");
    scanf("%d",&x);
    printf("\n");
   for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(x==a[i][j])
            {
                c++;
            }
        }
    }
    if(c==0)
    {
        printf(" not found");
    }
else{
    printf(" the number found %d times ",c);
}
    return 0;
}