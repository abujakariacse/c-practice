#include <stdio.h>

int main()
{
    while (1)
    {
        int m, n;
        scanf("%d %d", &m, &n);

        if (m <= 0 || n <= 0)
        {
            break;
        }

        if (m > n)
        {
            int temp;
            temp = m;
            m = n;
            n = temp;
        }

        int sum = 0;

        for (int i = m; i <= n; i++)
        {
            sum += i;
            printf("%d ", i);
        }
        printf("sum =%d\n", sum);
    }

    return 0;
}
