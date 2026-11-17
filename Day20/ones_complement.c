
#include <stdio.h>

int main()
{
    long long n, remainder;
    long long result = 0, place = 1;
    int valid = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    if (n <= 0)
    {
        printf("Please enter a positive binary number.\n");
        return 0;
    }

    while (n > 0)
    {
        remainder = n % 10;

        if (remainder != 0 && remainder != 1)
        {
            valid = 0;
            break;
        }

        if (remainder == 0)
            result = result + place;

        place = place * 10;
        n = n / 10;
    }

    if (valid == 1)
        printf("1's Complement = %lld\n", result);
    else
        printf("Invalid binary number.\n");

    return 0;
}
