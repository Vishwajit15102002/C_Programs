#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
int i;
char str1[25],str2[25],str3[25];
printf(" Enter your name : ");
gets(str1);
strcpy(str2,str1);
printf(" The copy of string1 is : %s \n",str2);
i=0;
while(str1[i]!='\0')
{
    str3[i]=str1[i];
    i++;
}
str3[i]='\0';
printf(" The coppied sentence is %s ",str3);
return 0;

}