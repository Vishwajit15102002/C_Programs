//pattern for [T]
#include<stdio.h>
int main()
{
	int i=1,j,n;
	printf("line count:");
	scanf("%d",&n);
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			if(i==1||j==n/2+1)
			   printf("*");
			else
			   printf(" ");
			   j++;   
		}
		printf("\n");
		i++;
	}
	return 0;
}
