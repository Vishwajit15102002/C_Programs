// Addition of two numbers
#include<stdio.h>
#include<conio.h>

int main()
{

float a,b,c,add,mul,sub,div;
printf(" Enter the first number: ");
scanf("%f",&a);
printf(" Enter the second number : ");
scanf("%f",&b);
printf(" Enter the third number : ");
scanf("%f",&c);
add=a+b+c;
sub=(a-b)-c;
mul=a*b*c;
div=(a/b)/c;

printf(" The sum of three numbers is %f\n ",add);
printf(" The subtraction of three numbers is %f\n ",sub);
printf(" The multiplication of three numbers is %f\n ",mul);
printf(" The division of three numbers is %f\n",div);


return 0;
}