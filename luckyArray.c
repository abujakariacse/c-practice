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

    int min = numbers[0];
    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }

    for (int j = 0; j < n; j++)
    {
        if (numbers[j] == min)
        {
            found += 1;
        }
    }

    if (found % 2 != 0)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }

    return 0;
}