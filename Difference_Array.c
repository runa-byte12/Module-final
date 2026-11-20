#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        int a[1000], b[1000], c[1000];

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(b[i] > b[j])
                {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        for(int i = 0; i < n; i++)
        {
            c[i] = a[i] - b[i];

            if(c[i] < 0)
            {
                c[i] = -c[i];
            }
        }

        for(int i = 0; i < n; i++)
        {
            printf("%d ", c[i]);
        }

        printf("\n");
    }

    return 0;
}