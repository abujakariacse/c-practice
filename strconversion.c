#include <stdio.h>
#include <string.h>

int main()
{
    char str[100000];
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != ',')
        {
            char alphabet;

            if (str[i] >= 65 && str[i] <= 90)
            {
                // alphabet = str[i] + 32;
                str[i] = str[i] + 32;
            }
            else if (str[i] >= 97 && str[i] <= 122)
            {
                // alphabet = str[i] - 32;
                str[i] = str[i] - 32;
            }
        }
        else
        {
            str[i] = ' ';
        }
    }
    printf("%s\n", str);

    return 0;
}