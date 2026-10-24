
#include <stdio.h>

int main()
{
    int a, b, remainder;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a == 0 && b == 0)
    {
        printf("HCF is not defined for both numbers being zero.\n");
        return 0;
    }

    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    while (b != 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("HCF (GCD) = %d\n", a);

    return 0;
}
