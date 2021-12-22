// Sum of no's 1-100 using do while loop.
#include<stdio.h>
#include<conio.h>

int main()
{
int c=1,sum=0,n;
printf(" Enter the number : ");
scanf("%d",&n);
do
{
   if(c%2==0)
   {
       sum=sum+c;
   }
    c++;
}    
while(c<=n);
{
    printf(" \n");
     printf(" Sum of all even numbers is %d ",sum);
}
return 0;
}   