#include <stdio.h>

int main()
{
    int N;
    int X;
    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg = 0;

    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &X);
        if (X % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (X > 0)
        {
            pos++;
        }
        else if (X < 0)
        {
            neg++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    return 0;
}