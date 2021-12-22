#include<stdio.h>
#include<conio.h>
 
int primecheck(int);                   // function declaration
 
int main()
{
   int n, result;
 
   printf("Enter an integer for primecheck : ");
   scanf("%d",&n);
 
   result = primecheck(n);                // function call
 
   if ( result == 1 )
      printf("%d is prime.\n", n);
   else
      printf("%d is not prime.\n", n);
 
   return 0;
}
 
int primecheck(int a)                     // function defination
{
   int c;
 
   for ( c = 2 ; c <= a - 1 ; c++ )
   { 
      if ( a%c == 0 )
     return 0;
   }
   return 1;
}
