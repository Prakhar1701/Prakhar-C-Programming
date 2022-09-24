#include <stdio.h>
 typedef struct student //METHORD 1 TO GIVE ALIAS TO A STRUCTURE DATATYPE.
    {
        int id;

    } strs /*alias name from 1st method*/;
int add(int a)
{
    strs prakhar;
    prakhar.id = 5;
    return a + prakhar.id;
}

int main()
{
    //-------------------------------------------------------------------------------------
   /*IF ABOVE STRUCTURE WAS HERE IT WOULD BE A LOCAL STRUCTURE DATA TYPE OF MAIN FUNCTION AND CAN BE EXCESSED ONLY INSIDE THIS main FUNCTION AND NOT FROM add FUNCTION ABOVE. */
    //-------------------------------------------------------------------------------------
    strs shubham;

    typedef struct student ss; // METHORD 2 TO GIVE ALIAS TO A STRUCTURE DATATYPE.
    ss ravi;
    // ABOVE ss AND strs BOTH ARE ALIAS NAME OF struct student STRUCTURE DATATYPE.

    shubham.id = 45;
    ravi.id = 20;
    printf("%d\n", shubham.id);
    printf("%d\n", ravi.id);
    printf("%d\n", add(5));
    return 0;
}//RUN THIS PROGRAM MANUALLY.