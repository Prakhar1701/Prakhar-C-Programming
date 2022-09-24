#include <stdio.h>
int add(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}
int main()
{
    int a, b;
    static int sum_ab;
    // static int sum_ab= add(a,b); // Incorrect to do
    // In C, static variables can only be initialized using constant literals.
    // We can not reinitialize a static variables.

    printf("Enert the value of a & b , press enter after each enter :\n");
    scanf("%d%d", &a, &b);
    sum_ab = add(a, b);
    // We can change the value of static variable during runtime.
    printf("Sum of a & b is %d .\n", sum_ab);
    return 0;
}