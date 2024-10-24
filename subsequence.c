#include <stdio.h>
#include <string.h>

int main()
{
    char S[10001];
    scanf("%s", S);

    char targetString[] = "hello";
    int length = strlen(targetString);
    int j = 0;

    for (int i = 0; S[i] != '\0'; i++)
    {
        if (S[i] == targetString[j])
        {
            j++;
        }
        if (j == length)
        {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");

    return 0;
}