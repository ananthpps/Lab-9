#include <stdio.h>

int main()
{
    int arr[100], n, max;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    max = *ptr;

    for (int i = 1; i < n; i++)
    {
        if (*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
    }

    printf("Maximum number = %d\n", max);

    return 0;
}
