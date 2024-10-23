#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    scanf("%s", str);
    int isPalindrom = 0;
    for (int i = 0, j = strlen(str) - 1; i <= j; i++, j--)
    {
        if (str[i] == str[j])
        {
            isPalindrom = 1;
        }
        else
        {
            isPalindrom = 0;
            break;
        }
    }
    if (isPalindrom)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}