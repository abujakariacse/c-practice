#include <stdio.h>

int main()
{
    int input_days;
    scanf("%d", &input_days);

    int years = input_days / 365;

    int rest_days = input_days - (years * 365);

    int months = rest_days / 30;

    int days = rest_days - (months * 30);

    printf("%d years\n%d months\n%d days", years, months, days);
    return 0;
}