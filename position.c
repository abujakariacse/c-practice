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
        if (sum + numbers[j] < 10)
        {
            printf("A[%d] = %d", j, numbers[j]);
            sum += numbers[j];
            printf("\n");
        }
        else
        {
            continue;
        }
    }

    return 0;
}