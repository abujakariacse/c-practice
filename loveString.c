#include <stdio.h>
#include <string.h>

int main()
{
    int tc;

    scanf("%d", &tc);

    while (tc--)
    {
        char S[51], T[51];
        scanf("%s %s", S, T);

        int len_s = strlen(S);
        int len_t = strlen(T);
        int length = len_s + len_t;

        if (len_s > len_t)
        {
            length = len_s;
        }
        else
        {
            length = len_t;
        }

        for (int i = 0; i < length; i++)
        {
            if (i < len_s)
            {
                printf("%c", S[i]);
            }
            if (i < len_t)
            {
                printf("%c", T[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
