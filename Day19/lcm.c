
#include <stdio.h>

int main()
{
    int a, b, i, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0)
    {
        printf("Please enter positive integers.\n");
        return 0;
    }

    for (i = (a > b ? a : b); ; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }

    printf("LCM = %d\n", lcm);

    return 0;
}
