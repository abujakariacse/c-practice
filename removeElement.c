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

    int index;
    scanf("%d", &index);

    // METHOD - 1
    // for (int i = index + 1; i < length; i++)
    // {
    //     a[i - 1] = a[i];
    // }

    // METHOD - 2
    for (int i = index; i < length; i++)
    {
        a[i] = a[i + 1];
    }
    length--;

    for (int i = 0; i < length; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}