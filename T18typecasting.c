#include <stdio.h>

int main()
{
    //TYPECASTING:(syntax)

    //(type) value;

    float a = 3.1,
          c = (float)54 / 5; //here 54 is typecasted into float go get result in float.
     /*operation between two integers results in a integer only,
       to get answer in float we have to convert atleast on integer to float value.*/

    int b = 54;

    printf("The value of a is %d\n", (int)a);

    printf("The value of b is %f\n", (float)b);

    printf("The value of c is %f\n", c);

    return 0;
}