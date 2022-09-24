//NULL Pointer
/*
1. Has a value reserved for indicating that the pointer or reference does not refer to a valid object.

2. Is guaranteed to compare unequal to any pointer that points to a valid object.(If pointer is left uninitialised it will contain a garbage value which may get equal to any address.)

3. Dereferencing a Null Pointer  is undefine behavior in C, and a conforming implementation (e.g.- Code which checks weather pointer is a null pointer or not.)* is allowed to assume that any pointer that is dereferenced is not null.

4. Is a specific pointer which is mentioned in C standards and it has specific purpose.

5. Gives a functionality to C programmer to check weather a pointer is legitimate or not.

6. Is a pointer that points to NULL (nothing).

7. Should not be dereferenced.

8.A check* must be run by the programmer to know weather a pointer is null before dereferencing it.
*/
/*
int x = 10;
int *p NULL; // Null Pointer 
p = &x;      // Null Pointer now holds address of int 'x'
*/

#include <stdio.h>
int main()
{
    int a = 34;
    int *ptr = &a;
    //check*
    if (ptr != NULL)
    {
        printf("The address of a is %d .\n", *ptr);
    }
    else
    {
        printf("The pointer is a null pointer and cannot be dereferenced.\n");
    }

    return 0;
}