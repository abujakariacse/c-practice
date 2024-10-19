#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int found = 0;

    for (int i = a; i <= b; i++)
    {

        int lucky = 1;
        int number = i;

        while (number > 0)
        {
            int lastDigit = number % 10;

            if (lastDigit != 4 && lastDigit != 7)
            {
                lucky = 0;
                break;
            }
            number /= 10;
        }
        if (lucky)
        {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found)
    {
        printf("%d", -1);
    }

    return 0;
}
