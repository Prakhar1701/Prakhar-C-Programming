// STATIC STORAGE CLASS
/*
 This storage class is used to declare static variables which are popularly used while writing programs in C language. Static variables have a property of preserving their value even after they are out of their scope! Hence, static variables preserve the value of their last use in their scope. So we can say that they are initialized only once and exist till the termination of the program. Thus, no new memory is allocated because they are not re-declared. Their scope is local to the function to which they were defined. Global static variables can be accessed anywhere in the program. By default, they are assigned the value 0 by the compiler.
*/
#include <stdio.h>
int b;
static int c;
//Above both variables are stored in static storage class.
//static is the default storage class for global variables.
//Scope of Variable 'b' & 'c' is global.

void stat()
{
    static int a;
    //Scope of variable 'a' is local to the function.
    //variable 'a' will preserve its value even after going out of scope.
    printf("a = %d\n",a);
}
int main()
{
    // printf("%d\n",a); // Incorrect to do
    stat();
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    //Variable a,b & c will all contain value equal to 0 by defalt.
    
    return 0;
}