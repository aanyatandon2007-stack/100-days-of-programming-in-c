#include <stdio.h>

int main(void)
{
    float first, second, third;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &first, &second, &third);

    if (first >= second && first >= third)
    {
        printf("Largest number = %.2f\n", first);
    }
    else if (second >= first && second >= third)
    {
        printf("Largest number = %.2f\n", second);
    }
    else
    {
        printf("Largest number = %.2f\n", third);
    }

    return 0;
}

/*
Sample output:

Enter three numbers: 12 45 30
Largest number = 45.00
*/
