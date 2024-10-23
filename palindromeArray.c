#include <stdio.h>
int numbers[100000];

int main()
{
    long long length;
    scanf("%lld", &length);

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int flag = 0;

    for (int i = 0, j = length - 1; i <= j; i++, j--)
    {
        if (numbers[j] == numbers[i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}