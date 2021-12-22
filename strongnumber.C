// strong number . 
#include<stdio.h>
#include<conio.h>
int strong(int a);

int main()
{
 int n, r;
 printf("enter the number : ");
 scanf("%d",&n);
 r=strong(n);
 if(r==0)
{
	 printf("strong");
}
 else
 {
	 printf("not strong");
 }
 return 0;
}
 
 int strong(int a)
 {
 	int d,i,sum=0,f=1,x=a;
 	{
	
 	while(a>0)
 	{
 		d=a%10;
 		while(d>=x)
 		{
 			f=f*d;
 			d--;
 		}
 		sum=sum+f;
 	}
 	a=a/10;
 }
 if (sum==x)
 {
	 return 0;
 }
 else
 {
	 return 1;
 }
		 
 }