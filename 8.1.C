#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
int x,i,c=0;
char str[25];
printf(" Enter your name : ");
gets(str);
x=strlen(str);
for(i=0;str[i]!='\0';i++)
{
    c++;
}
printf(" The length of the string is %d \n",c);
printf(" Length is : %d",x);
return 0;
}