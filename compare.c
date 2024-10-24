#include <stdio.h>
#include <string.h>

int main()
{
    char str1[21];
    char str2[21];

    scanf("%s", str1);
    scanf("%s", str2);

    int res = strcmp(str1, str2);

    if (res < 0)
    {
        printf("%s", str1);
    }
    else if (res > 0)
    {
        printf("%s", str2);
    }
    else
    {
        printf("%s", str1);
    }

    return 0;
}