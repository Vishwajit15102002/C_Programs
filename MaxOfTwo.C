// Finding maximum of two numbers.
#include<stdio.h>
#include<conio.h>

int maxcheck(int, int);
int main()
{
	int a,b,r;
	printf(" Enter two values : ");
	scanf("%d%d",&a,&b);
	r=maxcheck(a,b);
	printf("%d is max", r);
	return 0;
}

int maxcheck(int a, int b)
{
	if(a>b)
	{
		return a;
	}else
	{
		return b;
	}
}