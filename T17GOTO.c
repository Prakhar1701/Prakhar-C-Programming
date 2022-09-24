
// GOTO STATEMENT

//(1)Also called jump statement in C.
//(2)Used to transfer program control to a predefined lable.
//(3)Its use is avoided since it causes confusion for the fellow programmers in understanding the code.
//(4)Goto statement is preferable when we need to break multiple loops using a single statement at the same time.

#include <stdio.h>

int main()
{

    // lable:
    //     printf("Hello Prakhar\n");
    //     goto lable;

    // This is an infinite loop,infinite loop can be stopped by pressing "ctrl+C" keys in the terminal.

    //-----------------------------------------------------------------------------------------------------------------
    /* Here by entering 0 we can get exit from the both loops at the same time, if we have used break statement in a loop 
    we may exit a single loop only .*/

    //end: ( A label can only be part of a statement and a declaration is not a statement.)ERROR IF WE PLACE LABLE HERE.
    int num;  //------------this is declaration.
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number :\n(enter 0 to exit)\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }
end:
    return 0;
}
