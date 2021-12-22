// Sum of no's 1-100 using do while loop.
#include<stdio.h>
#include<conio.h>

int main()
{
int c=1,sum=0;

do
{
    sum=sum+c;
    c++;
}    
while(c<=100);
{
     printf(" Sum = %d ",sum);
}
return 0;
}