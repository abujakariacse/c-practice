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

    for (int j = 0; j < n; j++)
    {
        if (numbers[j] <= 10)
        {
            printf("A[%d] = %d", j, numbers[j]);

            printf("\n");
        }
    }

    return 0;
}
