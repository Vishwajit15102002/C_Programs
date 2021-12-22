#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
char a[25],r;
int i,c=0;
printf(" Enter your name : ");
gets(a);
printf(" Enter the character : ");
r=getchar();
for(i=0;a[i]!='\0';i++)
{
if(a[i]==r)
{
    c++;
}    
}
if(r==0)
{
printf(" not found " );
}
else 
{
    printf(" %c found %d times ",r,c);
}
return 0;
}