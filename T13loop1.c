#include <stdio.h>

int main()
{
    //DO WHILE LOOP
    // do while loop atleast executes one time.

    int num, index = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("You have entered the number \" %d \" \n", num);

    do
    {
        printf("%d\n", index);
        index = index + 1;

    } while (index < num);

    //---------------------------------------------------------------------------------------------------------------------------------------------------------
    // An another programe :

    index = 1; //here the value of index has been changed.

    do
    {
        printf("%d\n\n", index);
        //inspite of changing the value for this programe we may also do "+1 " to index here.

        index = index + 1;

    } while (index <= num);
    // here <= is used as condition in while.

    return 0;
}