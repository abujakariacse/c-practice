
#include <stdio.h>
int a[100000];
int main()
{
    // If I want to insert a value into array i need to increase a length of the array.
    int length;
    scanf("%d", &length);

    // input array values
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }

    // Get insertion index and value
    int index, value;
    scanf("%d %d", &index, &value);

    // increment array length to push a new element
    length++;

    // value will move to it's next index and loop will start from previous length cause we have to move the values into next one more index.
    for (int i = length - 1; i >= index; i--)
    {
        a[i + 1] = a[i];
    }

    // inserting new value
    a[index] = value;

    for (int i = 0; i < length; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}