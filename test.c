#include <stdio.h>

int main()
{
    int A, B;

    scanf("%d %d", &A, &B);

    int found = 0; // To track if we found any lucky numbers

    // Loop through numbers from A to B
    for (int i = A; i <= B; i++)
    {
        int num = i;
        int isLucky = 1; // Assume the number is lucky initially

        // Check each digit of the number
        while (num > 0)
        {
            int digit = num % 10; // Get the last digit
            if (digit != 4 && digit != 7)
            {
                isLucky = 0; // Not a lucky number
                break;       // Exit the loop early
            }
            num /= 10; // Remove the last digit
        }

        // If it's a lucky number, print it
        if (isLucky)
        {
            printf("%d ", i);
            found = 1; // Set found to true
        }
    }

    // If no lucky numbers found, print -1
    if (!found)
    {
        printf("-1");
    }

    return 0;
}
