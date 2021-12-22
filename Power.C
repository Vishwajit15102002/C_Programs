// Finding power of an number.
#include<stdio.h>
#include<math.h>

int main()
{
int x,y;
float  result;
printf(" Value of x and y : "); // x is the nummber of which we have to find the power and y is the power.
scanf("%d%d",&x,&y);
result=pow(x,y); 
printf(" power=%f ",result);
return 0;
}