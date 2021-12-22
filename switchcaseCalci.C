
#include <stdio.h>

int main()
{
    char op;
    float num1, num2, result=0;

    /* Print welcome message */
    printf(" \t\t\t\t WELCOME TO SIMPLE CALCULATOR\n ");
    printf("Enter [number 1] [+ - * /] [number 2]\n");

    /* Input two number and operator from user */
    scanf("%f %c %f", &num1, &op, &num2);

    /* Switch the value and perform action based on operator*/
    switch(op)
    {
        case '+': 
            result = num1 + num2;
            break;

        case '-': 
            result = num1 - num2;
            break;

        case '*': 
            result = num1 * num2;
            break;

        case '/': 
            result = num1 / num2;
            break;

        default: 
            printf("Invalid operator");
    }

    printf("%f %c %f = %f", num1, op, num2, result);

    return 0;
}