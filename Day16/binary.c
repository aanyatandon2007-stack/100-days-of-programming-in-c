#include <stdio.h>

int main()
{
    int n, remainder;
    long long binary = 0, place = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative integer.\n");
        return 0;
    }

    if (n == 0)
    {
        printf("Binary representation = 0\n");
        return 0;
    }

    while (n > 0)
    {
        remainder = n % 2;
        binary = binary + remainder * place;
        place = place * 10;
        n = n / 2;
    }

    printf("Binary representation = %lld\n", binary);

    return 0;
}
