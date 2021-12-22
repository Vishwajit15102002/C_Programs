#include<stdio.h>

int main()
{
    int a[10],i,j,n;
    printf(" Enter 10 numbers : ");
    for(i=0;i<10;i++)
    {
     scanf("%d",&a[i]);
    }

    printf(" numbers before sorting are : \n");
    for(i=0;i<10;i++)
    {
    printf("%d\n",a[i]);
    }
    for(i=0;i<10;i++)
    {
     for(j=i+1;j<10;j++)
     {
       if(a[i]<a[j])
       {
           n=a[i];
           a[i]=a[j];
           a[j]=n;
       }
     }
    }
    printf("the numbers after sorting are : \n");
    for(i=0;i<10;i++)
    printf("%d\n",a[i]);
    return 0;
}