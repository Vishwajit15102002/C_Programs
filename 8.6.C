#include<stdio.h>
#include<string.h>

int main()
{
char r,a[25],b[25];
printf(" Enter your name : ");
gets(a);
strcpy(b,a);
strrev(a);
r=strcmp(a,b);
if(r==0)
{
    printf(" Palindrome ");
}
else
{
    printf(" Not a palindrome ");
}
return 0;
}