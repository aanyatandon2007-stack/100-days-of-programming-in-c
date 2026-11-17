
#include <stdio.h>

int main()
{
    int n, original, digit, i;
    int factorial, sum = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative integer.\n");
        return 0;
    }

    original = n;

    do
    {
        digit = n % 10;
        factorial = 1;

        for (i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        n = n / 10;

    } while (n > 0);

    if (sum == original)
        printf("%d is a Strong number.\n", original);
    else
        printf("%d is not a Strong number.\n", original);

    return 0;
}
