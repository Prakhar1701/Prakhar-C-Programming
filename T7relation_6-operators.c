#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter Number a\n");
    scanf("%d" , &a);
    printf("Enter Number b\n");
    scanf("%d" , &b);

    printf(" %d\n", a==b);

    printf(" %d\n", a!=b);

    printf(" %d\n", a>b);

    printf(" %d\n", a<b);

    printf(" %d\n", a>=b);

    printf(" %d\n", a<=b);

    // 1 if relation between a and b is true
    // 0 if relation between a and b is false 
    
    return 0;

}