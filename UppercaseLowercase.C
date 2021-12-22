// whether a character is upper case or lower case
#include <stdio.h>
#include<conio.h>


int main()
{
    char ch;
    printf(" Enter any character : ");
    scanf("%c", &ch);
    if(ch >='A' && ch <='Z')
    {
        printf(" %c is uppercase alphabet ", ch);
    }
    else if(ch >='a' && ch <='z')
    {
        printf(" %c is lowercase alphabet.", ch);
    }
    else
    {
        printf("'%c' is not an alphabet.", ch);
    }

    return 0;
}