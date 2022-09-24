#include <stdio.h>
//An example of RECURTION FUNCTION IN C  :

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{

    int number;
    printf("Enter a number you want the factorial of:\n");
    scanf("%d", &number);
    printf("The factorial of %d is %d\n", number, factorial(number));

    return 0;
}