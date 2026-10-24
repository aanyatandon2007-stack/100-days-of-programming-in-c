
#include <stdio.h>

int main()
{
    int n, original, remainder, digits = 0;
    int sum = 0, temp, power, i;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative integer.\n");
        return 0;
    }

    original = n;
    temp = n;

    do
    {
        digits++;
        temp = temp / 10;
    } while (temp > 0);

    temp = n;

    while (temp > 0)
    {
        remainder = temp % 10;
        power = 1;

        for (i = 1; i <= digits; i++)
        {
            power = power * remainder;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
