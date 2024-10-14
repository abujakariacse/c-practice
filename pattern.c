#include <stdio.h>

int main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d\n", j);
        }
        printf("%d\n", i);
    }
    return 0;
}