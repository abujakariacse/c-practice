#include <stdio.h>

int main()
{
    // If we give string input more then the length of the string array it will overflow and abort the program

    // string array (Separate charecter)
    char str[10] = {'a', 'b', 'c', 'd'};

    // string input
    char str2[10] = "abcdefgh";

    // string input
    char str3[20];

    // if we want to take string input with ' '(whitespace) we have to use "%[^\n]s".
    // scanf("%[^\n]s", str3);

    char str4[10];

    // another method to get input (varibleName, variableSize, stdin - standard input)
    // gets(variableName)
    fgets(str4, sizeof(str4), stdin);

    // puts(variableName)
    fputs(str4, stdout);
    return 0;
}