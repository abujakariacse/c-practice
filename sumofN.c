#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    /*
     we took long long here cause our contraint is - Only one line containing a number N
    (1≤N≤109). That means I'm adding 10^9 numbers together and its getting bigger when I'm adding them togerther. example: If I add 10^9 + 10^9 it will be 10^18 that int can't afford/store. thats why we took long long for that.
     */

    /* For this program I've [time limit per test 0.25 seconds
    memory limit per test 256 megabytes] this condition. But I can iterate 10^8 per mili seconds that's why I can't solve this using loop/traverse. I have to use mathmatical operation for that.
     */

    long long sum = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    // printf("%lld", sum);

    sum = (1LL * n * (n + 1)) / 2;

    printf("%lld", sum);

    return 0;
}