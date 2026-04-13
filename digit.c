#include <stdio.h>

int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int N;
        scanf("%d", &N);
        do
        {
            int digit = N % 10;
            printf("%d ", digit);
            N /= 10;
        } while (N != 0);
        printf("\n");
    }

    return 0;
}