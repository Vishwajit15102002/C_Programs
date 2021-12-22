// Checking weyher he/she is adult
#include<stdio.h>
#include<conio.h>

int main()
{
int age; 
printf(" Enter your age  : ");
scanf("%d",&age);

if(age>=18)
{
    printf(" You are adult  ",age);

}
if(age<18)
{
printf(" You are not adult  ",age);
}
return 0;
}
