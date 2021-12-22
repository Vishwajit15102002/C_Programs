// Finding Type of Triangle
#include<stdio.h>
#include<conio.h>

int main()
{
int a,b,c;
printf(" Enter length of three sides of triangles : ");
scanf("%d%d%d",&a,&b,&c);
if(a==b &&  b==c)
   {
        printf(" The Triangle is Equilateral Triangle " );
   }
else if(a==b || b==c || a==c)
{

      printf(" The Triangle is Isosceles Triangle ");
}
  else
  {
      printf(" The Traingle is Scalen Triangle ");
  }

return 0;
}