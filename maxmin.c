#include <stdio.h>

int main()
{
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    // For Min
    if (A <= B && A <= C)
    {
        printf("%d ", A);
    }
    else if (B <= A && B <= C)
    {
        printf("%d ", B);
    }
    else
    {
        printf("%d ", C);
    }

    // For Max
    if (A >= B && A >= C)
    {
        printf("%d", A);
    }
    else if (B >= A && B >= C)
    {
        printf("%d", B);
    }
    else
    {
        printf("%d", C);
    }
}