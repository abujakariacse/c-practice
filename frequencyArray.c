/*
Question: https://docs.google.com/document/d/1wyXv1Iqx1W21n2HAoOM1yC5VMEOewKveA8O_Q1CliSo/edit?tab=t.0

Frequency Array:


 */

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 1; i <= m; i++)
    {
        int found;
        for (int j = 0; j < n; j++)
        {

            // printf("J= %d, I = %d\n", numbers[j], i);
            if (i == numbers[j])
            {
                found++;
            }
        }

        printf("%d\n", found);
        found = 0;
    }

    return 0;
}