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

    int searchStr;
    scanf("%d", &searchStr);

    for (int j = 0; j < n; j++)
    {
        if (numbers[j] == searchStr)
        {
            printf("%d\n", j);
            break;
        }
        if (j == (n - 1) && numbers[j] != searchStr)
        {
            printf("%d", -1);
        }
    }

    return 0;
}

/*


4
2 3 2 1
2


 */