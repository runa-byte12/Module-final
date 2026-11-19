
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int count;

        if (i <= n)
            count = 2 * i - 1;
        else
            count = 2 * (2 * n - i) - 1;

        int space = (2 * n - 1 - count) / 2;

        for (int j = 1; j <= space; j++)
            printf(" ");

        for (int j = 1; j <= count; j++)
        {
            if (i % 2 == 1)
                printf("#");
            else
                printf("-");
        }

        printf("\n");
    }

    return 0;
}
