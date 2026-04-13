#include <stdio.h>

int main()
{
    int X;
    scanf("%d", &X);
    int max = 0;
    for (int i = 1; i <= X; i++)
    {
        int value;
        scanf("%d", &value);
        if (value > max)
        {
            max = value;
        }
    }
    printf("%d", max);
    return 0;
}