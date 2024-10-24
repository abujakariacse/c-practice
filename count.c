#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000001];

    scanf("%s", str);

    int len = strlen(str);

    int count = 0;
    for (int i = 0; i < len; i++)
    {
        int digit = str[i] - '0';
        count += digit;
    }

    printf("%d", count);

    return 0;
}