
#include <stdio.h>

int main()
{
    int n, first, last, temp;
    int digits = 0, divisor = 1;
    int middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    temp = n;
    last = n % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        digits++;
    }

    first = temp;

    if (digits == 0)
    {
        result = n;
    }
    else
    {
        for (int i = 1; i <= digits; i++)
            divisor = divisor * 10;

        middle = (n % divisor) / 10;

        result = last * divisor + middle * 10 + first;
    }

    printf("Number after swapping first and last digits = %d\n", result);

    return 0;
}
