#include <stdio.h>

int main()
{

    int N;
    int first, last;

    scanf("%d", &N);

    first = N % 10;
    last = N / 10;

    if (N >= 10 && N <= 99)
    {
        if (first % last == 0 || last % first == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
}