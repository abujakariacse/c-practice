#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int k = 1;

    for (int i = 1; i <= n; i++, k += 2)
    {
        int space = n - i;

        while (space--)
        {
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    k -= 2;
    for (int i = n; i >= 1; i--, k -= 2)
    {
        int space = n - i;
        while (space--)
        {
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*


                k   i   space
  *             1   1   3
  ***           3   2   2
 *****          5   3   1
*******         7   4   0
*******         7   4   0
 *****          5   3   1
  ***           3   2   2
   *            1   1   3




 */