#include <stdio.h>

int main()
{
    //WHILE LOOP
    //This loop may not execute even a single time if the condition is not satisfied.

    int i = 1;

    while (i < 11)
    {
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}