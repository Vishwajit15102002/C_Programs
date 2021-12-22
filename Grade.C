// Finding grade.
#include<stdio.h>
#include<conio.h>

int main()
{
float a,b,c,d,e,f,percentage;
printf(" Enter the marks of five subjects : ");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
percentage=(a+b+c+d+e)/5.0;
printf("Percentage = %.2f\n",percentage);
if(percentage>=90)
{
    printf(" Grade A ");
}
else if(percentage>=80)
{
    printf(" Grade B ");
}
else if(percentage>=70)
{
    printf(" Grade C ");
}
else if(percentage>=60)
{
    printf(" Grade D ");
}
else if(percentage>=50)
{
    printf(" Grade E ");
}
else if(percentage>=40)
{
    printf(" Pass ");
}
else
{
printf(" Fail ");
}
return 0;
}