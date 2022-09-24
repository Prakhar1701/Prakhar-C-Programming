#include <stdio.h>

// auto int c; // Incorrect to do
//auto can only be used within functions, i.e. local variables.

int main()

{
    auto int b;
    int a;
    //Above declaration of variable a & b have same meaning and both are stored in auto storage class.
    // Variables stored in auto storage class contains garbage value by defalt.
    printf("a = %d (Garbage value by defalt)\n", a);
    printf("b = %d (Garbage value by defalt)\n", b);
    return 0;
}