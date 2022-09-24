#include <stdio.h>

int main()
{
    //BREAK STATEMENT
    //Used with switch case statement and loops.
    int i, age;

    for (i = 0; i <15; i++)
    {
        printf("Enter your age\n");
        scanf("%d", &age);

        if (age > 10)
        {

            break;
        }
        printf("No break as age=%d is not more than 10.\n ",age);
        printf("Number of time the loop has been repeted=%d\n",i);
        

            //------------------------------------------------------------------------------------------------------------

            //CONTINUE STATEMENT
            //It is mainly used for a condition so that we can skip some lines of code for a particular condition.
            //Used in loops.

            if (age > 5)
        {
            continue;
        }

        printf("The age was not more than 5 .\n");
    }

    return 0;
}