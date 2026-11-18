
#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int largest, second;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2 || n > 100)
    {
        printf("Invalid number of elements.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    second = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] < largest)
        {
            second = arr[i];
        }
    }

    if (second == largest)
    {
        printf("Second largest element does not exist.\n");
    }
    else
    {
        printf("Second largest element = %d\n", second);
    }

    return 0;
}
