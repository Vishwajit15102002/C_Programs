// Finding square of an number.
#include<stdio.h>
#include<math.h>

int main()
{
int x;
float  result;
printf(" Value of x : "); // x is the nummber of which we have to find the power.
scanf("%d",&x);
result=pow(x,2); 
printf(" power=%f ",result);
return 0;
}