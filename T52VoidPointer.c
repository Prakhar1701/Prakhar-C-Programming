//Void Pointer

/*
1. Has no data type associated to it. 

2. Can be easily typecasted to any pointer type.

3. In simple language it is a general purpose pointer variable.

4. In dynamic memory allocation ,malloc() and calloc() return (void*) type pointer.

5. It is not possible to  dereference void pointers.

6. Pointer arithmetic is not allowed in C standards with void pointers ,hence it is not recommended to use pointer arithmetic with void pointers.
*/
#include <stdio.h>

int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr));
    ptr = &b;
    printf("The value of b is %f\n", *((float *)ptr));

    return 0;
}