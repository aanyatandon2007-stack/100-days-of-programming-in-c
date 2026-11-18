
#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= (i == 1 ? 1 : (i == 2 ? 4 : (i == 3 ? 3 : 1))); j++)
        {
            printf("*\n");
        }

        printf("\n");
    }

    return 0;
}
