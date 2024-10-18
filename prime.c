#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int isPrime = 1;

    if (n == 1)
    {
        printf("NO");
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
        }
    }

    if (isPrime == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}