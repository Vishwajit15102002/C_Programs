#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
char str3[25],str1[25]="Om",str2[25]="Pawar";
int i=0,j=0;
printf(" Enter your name : ");
gets(str1);
printf(" Enter your sirname : ");
gets(str2);
for(i=0;str1[i]!='\0';i++)
{
str3[j]=str1[i];
j++;
}
str3[j]='\0';
for(i=0;str2[i]!='\0';i++)
{
str3[j]=str2[i];
j++;
}
str3[j]='\0';
printf(" sentence is %s ",str3);

return 0;
}