#include <stdio.h>
/*
WHAT IS A FUNCTION ?
FUNCTION (SYNTAX)
ADVANTAGES OF C FUNCTIONS
Read a book or see a video on it to get answer of above questions if don't know the answer.
*/
/*
THERE ARE TOTAL 2 TYPES OF FUNCTIONS:
(A)Library Functions
e.g.- printf();  scanf();

(B)User Defined Functions
*/

//There are total 4 typers of user defined function :

//Here we are declaring and defining the functions ;

//(1)With arguments and with return value:
int sum(int a, int b)
{
    return a + b;
}
//(2)With argument and without return value:
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}
//(3)Without argument and with return value:
int takenumber()
{
    int i;
    printf("\n\nEnter a number\n");
    scanf("%d", &i);
    return i;
}
//(4)Without arguments and without return value:
void fun()
{
    printf("Hello prakhar");
}

int main()

{
    //Here we are calling the function ;

    int c;
    //------------------------------------------------------------------------------------------------------------(1)
    int a = 4;
    int b = 1;

    c = sum(a, b);
    printf("The sum is %d\n\n", c);

    //------------------------------------------------------------------------------------------------------------(2)
    printstar(7);

    //------------------------------------------------------------------------------------------------------------(3)
    c = takenumber();
    printf("The number you entered is %d\n\n", c);

    //------------------------------------------------------------------------------------------------------------(4)
    fun();

    return 0;
}