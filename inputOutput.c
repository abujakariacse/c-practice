#include <stdio.h>

int main()
{
    // If we give string input more then the length of the string array it will overflow and abort the program

    // string array (Separate charecter)
    char str[10] = {'a', 'b', 'c', 'd'};

    // string input
    char str2[10] = "abcdefgh";

    // string input
    char str3[10];
    scanf("%s", str3);

    printf("%s", str3);
    return 0;
}