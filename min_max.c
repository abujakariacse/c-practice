#include <stdio.h>
#include <limits.h>

int main()
{
    int a[10];

    for (int i = 0; i < sizeof(a); i++)
    {
        scanf("%d", &a[i]);
    }

    // int min = a[0];
    // int max = a[0];

    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < 10; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    printf("%d\n", min);
    printf("%d\n", max);

    return 0;
}