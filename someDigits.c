#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int number = n;
    int sum = 0;
    while (number > 0)
    {

        int lastDigit = number % 10;
        sum += lastDigit;
        number /= 10;
    }
    printf("%d", sum);
    return 0;
}