#include <stdio.h>
#include <string.h>

int main()
{
    char str[100000];
    scanf("%s", str);

    // printf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {

            str[i] = str[i] + 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else
        {
            str[i] = ' ';
        }
        printf("%c", str[i]);
    }

    return 0;
}