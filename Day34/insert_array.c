
#include <stdio.h>

int main()
{
    int arr[100], n, i, element, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1 || n >= 100)
    {
        printf("Invalid position or array is full.\n");
    }
    else
    {
        for (i = n; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[pos - 1] = element;
        n++;

        printf("Array after insertion:\n");

        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }

        printf("\n");
    }

    return 0;
}
