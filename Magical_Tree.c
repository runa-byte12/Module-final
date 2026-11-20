#include <stdio.h>

int main()
{
    int n, star = 1;
    scanf("%d", &n);

    int row = (n + 1) / 2 + 5;

    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= row - i; j++)
            printf(" ");

        for(int j = 1; j <= star; j++)
            printf("*");

        printf("\n");
        star += 2;
    }

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
            printf(" ");

        for(int j = 1; j <= n; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}