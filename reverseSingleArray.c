#include <stdio.h>
int a[100000];

int main()
{
    int length;
    scanf("%d", &length);

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }

    // Loop will be stopped when i & j will same value
    for (int i = 0, j = length - 1; i <= j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}