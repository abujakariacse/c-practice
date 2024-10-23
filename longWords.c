#include <stdio.h>

int main()
{
    int length;
    scanf("%d", &length);

    char str[100];

    for (int i = 0; i < length; i++)
    {
        scanf("%s", str);

        int count = 0;

        while (str[count] != '\0')
        {
            count++;
        }
        if (count <= 10)
        {
            printf("%s\n", str);
        }
        else
        {
            char first = str[0];
            char last = str[count - 1];

            printf("%c%d%c\n", first, count - 2, last);
        }
    }

    return 0;
}