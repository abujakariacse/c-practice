#include <stdio.h>
int a[100000];

int main()
{
    long long N;
    scanf("%lld", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0, j = N - 1; i <= j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}