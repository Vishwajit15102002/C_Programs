// Checking wether the integer is positive.
#include<stdio.h>
#include<conio.h>

int main()
{
int a; 
printf(" Enter the number : ");
scanf("%d",&a);
if(a>0)
{
    printf(" The number is a positive integer ",a);

}
if(a<0)
{
    printf(" The number is not a positive integer ",a);
}
return 0;
}
