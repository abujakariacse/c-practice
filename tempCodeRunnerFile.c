#include <stdio.h>

int main()
{
    int tc;

    scanf("%d", &tc);

    while (tc--)
    {
        char str[51];
        scanf("%[^\n]s", str);

        printf("%s", str);
    }

    return 0;
}