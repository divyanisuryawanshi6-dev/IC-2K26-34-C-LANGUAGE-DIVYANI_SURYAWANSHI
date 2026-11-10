//DIVYANI SURYAWANSHI
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (b != 0)
    {
        printf("Quotient = %d\n", a / b);
        printf("Remainder = %d", a % b);
    }
    else
    {
        printf("Division by zero is not possible");
    }

    return 0;
}
