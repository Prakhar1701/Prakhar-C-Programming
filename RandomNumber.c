#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n;
    printf("Enter value of n :\n");
    scanf("%d", &n);
    srand(time(NULL));
    printf("Random Number between 0 to %d : %d\n", n, rand() %n);
    return 0;
}