#include <stdio.h>

int main()
{

    int a[5];

    for (int i = 0; i < sizeof(a); i++)
    {
        scanf("%d", &a[i]);
    }

    int sum = 0;
    double avg;

    for (int j = 0; j < 5; j++)
    {
        sum += a[j];
        avg = (double)sum / 5;
    }

    printf("%d\n", sum);
    printf("%.2lf\n", avg);

    return 0;
}