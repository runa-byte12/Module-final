
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        int num = count;

        for (int j = 1; j <= count; j++)
        {
            printf("%d", num);
            num--;
        }

        printf("\n");

        count++;
        space--;
    }

    return 0;
}
