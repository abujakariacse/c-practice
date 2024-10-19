#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int min = INT_MAX;
    int max = INT_MIN;
    int maxIndex = numbers[n - 1];
    int minIndex = numbers[0];

    for (int j = 0; j < n; j++)
    {
        if (numbers[j] > max)
        {
            max = numbers[j];
            maxIndex = j;
        }
        if (numbers[j] < min)
        {
            min = numbers[j];
            minIndex = j;
        }
    }
    numbers[minIndex] = max;
    numbers[maxIndex] = min;

    for (int k = 0; k < n; k++)
    {
        printf("%d ", numbers[k]);
    }

    return 0;
}