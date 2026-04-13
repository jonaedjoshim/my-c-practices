#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        int X;
        while (scanf("%d", &X))
        {

            if (X == 1999)
            {
                printf("Correct\n");
                break;
            }
            else
            {
                printf("Wrong\n");
            }
        }

        return 0;
    }
}