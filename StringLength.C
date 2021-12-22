// Finding length of string.
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
char a[100];
int length;
printf(" input string : \n");
gets(a);
length = strlen(a);
printf(" The length of string is %d \n",length);
return 0;
}