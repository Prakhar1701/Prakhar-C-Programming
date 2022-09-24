
//IN C PROGRAMING LANGUAGE, WE CAN CALL A FUNCTION IN TWO DIFFERENT WAYS,BASED ON HOW WE SPECIFY ARGUMENTS,AND THESE TWO WAYS ARE:
/*(I)CALL BY VALUE  (all functions calls in previous programs are of 'call by value' type.)
(II)CALL BY REFERENCE*/

//DEFINATIONS:

/*(1)When a function is called,the values (expressions) that are passed in the call are called arguments or actual parameters.*/

/*(2)Formal parameters are local variables which are assigned values form the arguments when the function is called.*/

/*REFER BOOK OR VIDEO FOR local AND global variables.*/

#include <stdio.h>
void Call_by_value(int a) //HERE a IS A FORMAL PARAMETER.
{
    a = 50;//--------------(PUT RIGHT(50) INTO LEFT (*a))
    //This will not  change the value of actual parameter in the main function.
}

void Call_by_refrence(int *a)
{
    *a = 50;//--------------(PUT RIGHT(50) INTO LEFT (*a))
    //This will change the value of actual parameter in the main function.
}
int main()
{
    int b = 5;
    printf("The value of b is %d\n", b);

    //CALLING BY VALUE
    //Here there is no change in value b(actual parameter) in the main function.

    Call_by_value(b); //HERE b IS A argument OR actual parameter.
    printf("The value of b after calling bu value is %d\n", b);

    //CALLING BY REFRENCE
    //By calling by refrence the actual value of b(actual parameter) may change in main function.

    Call_by_refrence(&b);//HERE &b IS ADDRESS OF THE argument OR actual parameter.
    printf("The value of b after calling by refrence is %d\n", b);
    return 0;
}
