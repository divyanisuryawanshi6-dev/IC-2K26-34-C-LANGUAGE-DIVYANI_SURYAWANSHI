//DIVYANI SURYAWANSHI
#include <stdio.h>

int main()
{
    int a, b, i, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a == 0 || b == 0)
    {
        lcm = 0;
    }
    else
    {
        for (i = (a > b ? a : b); ; i++)
        {
            if (i % a == 0 && i % b == 0)
            {
                lcm = i;
                break;
            }
        }
    }

    printf("LCM = %d", lcm);

    return 0;
}
