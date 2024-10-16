#include <stdio.h>

int main()
{
    char alphabet;
    scanf("%c", &alphabet);

    if (alphabet >= 'a' && alphabet <= 'z')
    {
        alphabet -= 32;
    }
    else
    {
        alphabet += 32;
    }

    printf("%c\n", alphabet);

    return 0;
}