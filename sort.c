#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    // a min
    if (a <= b && a <= c)
    { // c max
        if (b <= c)
        {
            printf("%d\n%d\n%d\n", a, b, c);
        }
        // b max
        else
        {
            printf("%d\n%d\n%d\n", a, c, b);
        }
    }
    // b min
    else if (b <= a && b <= c)
    {
        // c max
        if (a <= c)
        {
            printf("%d\n%d\n%d\n", b, a, c);
        }
        // a max
        else
        {
            printf("%d\n%d\n%d\n", b, c, a);
        }
    }
    // c min
    else
    {
        // b max
        if (a <= b)
        {
            printf("%d\n%d\n%d\n", c, a, b);
        }
        // a max
        else
        {
            printf("%d\n%d\n%d\n", c, b, a);
        }
    }
    printf("\n");

    printf("%d\n%d\n%d", a, b, c);

    return 0;
}