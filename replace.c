#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int j = 0; j < n; j++)
    {
        if (numbers[j] < 0)
        {
            printf("%d", 2);
        }
        else if (numbers[j] > 0)
        {
            printf("%d", 1);
        }
        else
        {
            printf("%d", numbers[j]);
        }

        if (j < (n - 1))
        {
            printf(" ");
        }
    }

    return 0;
}