// DIVYANI SURYAWANSHI
#include <stdio.h>

int main()
{
    int n, original, rem, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    if (original == reverse)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}
