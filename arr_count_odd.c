#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            count += 1;
        }
    }

    printf("Odd numbers counted: %d\n", count);

    return 0;
}