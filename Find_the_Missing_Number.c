#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        long long m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long product = a * b * c;

        if(m % product == 0)
        {
            printf("%lld\n", m / product);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}