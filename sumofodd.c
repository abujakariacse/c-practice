#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int tc = 0; tc < n; tc++)
    {

        int x, y;
        scanf("%d %d", &x, &y);

        if (x > y)
        {
            int temp;
            temp = x;
            x = y;
            y = temp;
        }

        int sum = 0;

        for (int i = x + 1; i < y; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}