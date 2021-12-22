// Finding Even Or Odd. 
#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);


    switch(a%2)
    {
        case 0:
        printf("Even");
        break;

        case 1:
        printf("Odd");
        break;
    
    }
    
    return 0;
}
