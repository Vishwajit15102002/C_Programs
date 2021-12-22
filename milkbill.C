// Monthly Milk Bill Calculator
#include<stdio.h>
#include<conio.h>

int main()
{

float a,b,c,total;
printf(" Enter rate of milk per litre  : ");
scanf("%f",&a);
printf(" Enter how many days in month the milk has suplied : ");
scanf("%f",&b);
printf(" Enter how many litres of milk taken per day : ");
scanf("%f",&c);
total=(a*b)*c;
printf("\n\n \t\tMONTHLY MILK BILL \n\n \nThis is the monthly bill of milk = %f",total);

return 0;

}
