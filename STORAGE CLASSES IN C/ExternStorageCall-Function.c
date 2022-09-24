#include <stdio.h>
int sum(int a, int b);
//declaration of sum function globally.
extern int substract(int a, int b);
//declaration of substract function globally.

/* Above both function are only declared and have same meaning. */

int main()

{
    int multiply(int a, int b);
    // declaration of function locally  in the main function.

    int a, b, sum_ab, substract_ab, multi_ab;
    printf("Enert the value of a & b , press enter after each enter :\n");

    scanf("%d%d", &a, &b);
    sum_ab = sum(a, b);
    substract_ab = substract(a, b);
    multi_ab = multiply(a, b);

    printf("The sum of a and b is %d .\n", sum_ab);
    printf("The substract of b from a is %d .\n", substract_ab);
    printf("The multiplication of a and b is %d .\n", multi_ab);

    return 0;
}
//Here is the definition of the functions :

int sum(int a, int b)
{
    int sum;
    sum = a + b;
    //  printf("The multiplication of a and b is %d .\n", multi_ab); //Incorrect to do
    /*
    The above printing of multipication of a and b is not possible here because the function multiply is declared locally in the main function and hence it can't be used here in this sum function.
    */
    return sum;
}

int substract(int a, int b)
{
    int substract;
    substract = a - b;
    return substract;
}

int multiply(int a, int b)
{
    int multi;
    multi = a * b;
    return multi;
}