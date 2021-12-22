#include<stdio.h>
#include<conio.h>

int main()
{
int a;
printf(" Enter the Ph : ");
scanf("%d",&a);
if(a>=0 && a<=6)
printf(" Ph of %d is acidic ",a);
else 
{
    if(a==7)                                              // inside else we can take 1 if and 1 else in curly brackets
    printf(" Ph of %d is neutral ",a);
    else{
        if(a>=8 && a<=14)
        printf(" Ph of %d is basic ",a);
        else 
        printf(" The entered number is invalid ");
    }
}
return 0;
}
