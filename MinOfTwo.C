// Finding maximum of two numbers.
#include<stdio.h>
#include<conio.h>

int mincheck(int, int);
int main()
{
	int a,b,r;
	printf(" Enter two values : ");
	scanf("%d%d",&a,&b);
	r=mincheck(a,b);
	printf("%d is min", r);
	return 0;
}

int mincheck(int a, int b)
{
	if(a<b)
	{
		return a;
	}
  else
	{
		return b;
	}
}