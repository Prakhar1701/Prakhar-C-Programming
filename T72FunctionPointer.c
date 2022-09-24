#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    //Testing the function.
    printf("The sum 1 and 2 is %d\n", sum(1, 2));
    //Declaring a function pointer 
    int (*fptr)(int, int); 
    //Creating a function pointer 
    fptr = &sum;
    //Dereferencing a function pointer 
    int d = (*fptr)(4,6);

    printf("The value of d is %d\n",d);

    return 0;
}