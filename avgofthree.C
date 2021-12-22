#include<stdio.h>
#include<conio.h>

int main()
{
	int n1,n2,n3;                                     
	int avg (int a, int b, int c);                       
	printf("Enter three numbers:");                     
	scanf("%d %d %d",&n1,&n2,&n3);                       
	avg(n1,n2,n3);                                     
    return 0;
}
int avg (int a, int b, int c)                           
{
	float average;                                      
	average=(a+b+c)/3;                                  
	printf("Average=%f",average);
    return average;
}