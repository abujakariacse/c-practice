#include <stdio.h>

int main()
{
    long long days;
    scanf("%lld", &days);

    long long years = (days / 30) / 12;
    long long rest_days = days - (years * 365);

    long long months = rest_days / 30;

    long long new_days = rest_days - (months * 30);

    printf("%lld years\n", years);
    printf("%lld months \n", months);
    printf("%lld days \n", new_days);

    return 0;
}