// Q-FIBONACCI SERIES(WHICH APPROACH IS BETTER ITERATIVE OR RECURSIVE.)

#include <stdio.h>

int fib_iterative(int n) // THIS FUNCTION IS FOR ITERATIVE APPROACH.
{
    int a = 0, b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b; //HERE THE VALUE OF b IS UPDATED.
        a = b - a; //(Here the b is one which is updated.)
                   //HERE WE HAVE TO ASSINE VALUE OF a AS OLD b SO TO GET OLD VALUE OF b WE ARE SUBTRACTING a FROM b.
    }
    return a;
}

int fib_recursive(int n) // THIS FUNCTION IS FOR RECURSIVE APPROACH.
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int main()
{
/*
start:
(WE CAN NOT PUT LABLE OF GOTO STATEMENT HERE AS a label can only be part of a statement and a declaration is not a statement ) 
*/
    int n, q; //------------this is declaration.
start:
    printf("Enter the n^th term of the FIBONACCI SERIES you want the number of:\n");
    scanf("%d", &n);

    //(1)THE ITERATIVE APPROACH:
    q = fib_iterative(n);
    printf("The %d^th term of series is %d.\n", n, q);

    //-------------------------------------------------------------------------------------------------------------------

    //(2)THE RECURSIVE APPROACH:
    q = fib_recursive(n);
    printf("The %d^th term of series is %d.\n", n, q);

    goto start;
    return 0;
}
/*THE RESULT OF THIS EXERCISE IS THAT ITERATIVE APPROACH PROVES TO BE BETTER FROM RECURSIVE APPROACH IN TERMS TO TIME COMPLEXITY FOR THIS PATICULAR CASE OF FIBONACCI SERIES.*/