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
    int position;

    for (int j = 0; j < n; j++)
    {
        if (numbers[j] < min)
        {
            min = numbers[j];
            position = j + 1;
        }
    }

    printf("%d %d", min, position);
    return 0;
}