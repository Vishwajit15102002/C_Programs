#include<stdio.h>
#include<conio.h>

int main()
{
float celsius,fahrenheit;
printf(" Enter temp in fahrenheit : ");
scanf("%f",&fahrenheit);
celsius=(fahrenheit - 32)*5/9;
printf(" Temp in Celsius is %f",celsius);
return 0;
}