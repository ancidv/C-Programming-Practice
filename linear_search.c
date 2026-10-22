#include <stdio.h>

int main()
{
    int a[5], i, key;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Enter number to search: ");
    scanf("%d", &key);

    for (i = 0; i < 5; i++)
    {
        if (a[i] == key)
        {
            printf("Element found at position %d\n", i + 1);
            return 0;
        }
    }

    printf("Element not found\n");
    return 0;
}
