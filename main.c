/*
Simple C Calculator
Made by https://github.com/Mads-Milo
*/

#include <stdio.h>
#include <stdlib.h>

// Addition
void add(int a, int b)
{
    printf("%d\n", a + b);
}

// Subtraction
void subtract(int a, int b)
{
    printf("%d\n", a - b);
}

// Mulitiplication
void multiply(int a, int b)
{
    printf("%d\n", a * b);
}

int main()
{
    int a = 0;
    int b = 0;
    int operator = 1;

    // Get numbers
    printf("Enter first number >> ");
    scanf("%d", &a);
    printf("Enter second number >> ");
    scanf("%d", &b);

    // Get Operator
    printf("[1] Addition\n");
    printf("[2] Subtraction\n");
    printf("[3] Multiplication\n");
    printf("Select Operator >> ");
    scanf("%d", &operator);

    // Check Operator
    if(operator==1)
    {
        add(a, b);
    }
    else if(operator==2)
    {
        subtract(a, b);
    }
    else if(operator==3)
    {
        multiply(a, b);
    }

    system("pause");

    return 0;
}
