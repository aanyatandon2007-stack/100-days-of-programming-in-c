#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    switch (op)
    {
        case '+':
            printf("Result = %d\n", a + b);
            break;

        case '-':
            printf("Result = %d\n", a - b);
            break;

        case '*':
            printf("Result = %d\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f\n", (float)a / b);
            else
                printf("Division by zero is not allowed.\n");
            break;

        case '%':
            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Modulo by zero is not allowed.\n");
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
