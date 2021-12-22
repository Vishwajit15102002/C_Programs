// Sum of no's 1-100 using do while loop.
#include<stdio.h>
#include<conio.h>

int main()
{
int c=1;
for(c=1;c<=100;c++)
{
    if(c%2!=0)
    {
        printf(" The odd numbers are %d \n",c);
    }
}
return 0;
}