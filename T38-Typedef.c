//"typedef" is a key word in C language.
//It is used to give alternative name to existing datatypes.
//SANTAX: typedef <previous_name> <alias_name>;
#include <stdio.h>
int main()
{
    typedef int intger;
    intger x = 5;
    printf("The value of integer x is %d.\n", x);
    //------------------------------------------------------------------------------------------
    printf("\n");
    //-------------------------------------------------------------------------------------------
    //USING typdef WITH pointer:
    //<BEFORE>:
    int *a, b; //Here a is treated as a pointer but b as a integer only.
    int c = 10;
    a = &c;
    b = c;
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    //<AFTER>:
    typedef int *intp;
    intp d, e; //Here d,e both are treated as a pointer.
    d = &c;
    e = &c;
    printf("d=%d\n", d);
    printf("e=%d\n", e);
    //-------------------------------------------------------------------------------------------
    printf("\n");
    //-------------------------------------------------------------------------------------------
    // USING typedef WITH structure:

    /* THE BELOW STRUCTURE DATATYPE IS CREATED IN MAIN FUNCTION SO IT IS LOCAL STRUCTURE DATATYPE OF MAIN FUNCTION AND CAN NOT BE USED WITH FUNCTIONS OUTSIDE MAIN FUNCTION.*/
    typedef struct student //METHORD 1 TO GIVE ALIAS NAME TO A STRUCTURE DATATYPE.
    {
        int id;

    } strs /*alias name from 1st method*/;

    strs shubham;

    typedef struct student ss; // METHORD 2 TO GIVE ALIAS NAME TO A STRUCTURE DATATYPE.
    ss ravi;
    // ABOVE ss AND strs BOTH ARE ALIAS NAME OF struct student STRUCTURE DATATYPE.

    shubham.id = 45;
    ravi.id = 20;
    printf("%d\n", shubham.id);
    printf("%d\n", ravi.id);

    return 0;
}
