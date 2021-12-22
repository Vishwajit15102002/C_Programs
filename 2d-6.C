#include<stdio.h>
#include<conio.h>

int main()
{
int c=0,x,i,j,a[3][3];
printf(" Enter the numbers : ");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
    scanf("%d",&a[i][j]);
}
}
printf(" Enter the number which you want to search : ");
scanf("%d",&x);

for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
   if(x==a[i][j])
   {
      c++;
   }
}
}
if(c==0)
{
printf(" Not Found ");
}
else 
{
    printf(" The number %d Found %d times ",x,c);
}
return 0;
}