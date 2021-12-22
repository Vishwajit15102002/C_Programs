// Gross Salary of an Employee
#include<stdio.h>
#include<conio.h>

int main()
{

int BS,DA,TA,Total;
printf(" Enter the Basic Salary: ");
scanf("%d",&BS);
TA=0.2*BS;
DA=0.8*BS;
Total=BS+TA+DA;
printf(" The Gross Salary of an Employee is %d",Total);
return 0;

}