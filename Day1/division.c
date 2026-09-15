#include <stdio.h>

int main()
{
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (b == 0)
    {
        printf("Division by zero is not allowed.\n");
    }
    else
    {
        printf("Quotient = %.2f\n", a / b);
    }

    return 0;
}
