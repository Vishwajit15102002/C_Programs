#include<stdio.h>
#include<conio.h>

int swap(int ,int );

int main()
{
int a,b,x,y;
	printf("Enter any two integers: ");
	scanf("%d%d",&a,&b);
 
 printf("Before swapping: a = %d, b=%d",a,b);
 x=swap(a,b);
 y=swap(b,a);
 printf("\nAfter swapping: a = %d, b=%d",x,y);
 return 0;
}

 int swap(int a,int b)
 {

    int temp;
	temp = a;
	a=b;
	b=temp;
	return a;
	
}


