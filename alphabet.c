#include <stdio.h>

int main()
{
    char C;

    scanf("%c", &C);

    if (C == 'z')
    {
        printf("%c", 'a');
    }
    else
    {
        printf("%c", C + 1);
    }

    return 0;
}
