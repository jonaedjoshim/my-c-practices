#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        int value = arr[i];
        scanf("%d", &value);
        if (value > max)
        {
            max = value;
        }
    }

    printf("Maximum number of the array is: %d\n", max);
    return 0;
}