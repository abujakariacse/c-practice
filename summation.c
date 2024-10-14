#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int sum = 0;
    for (int j = 0; j < n; j++)
    {
        sum += numbers[j];
    }

    if (sum < 0)
    {
        printf("%d", sum * -1);
    }
    else
    {
        printf("%d", sum);
    }

    return 0;
}
