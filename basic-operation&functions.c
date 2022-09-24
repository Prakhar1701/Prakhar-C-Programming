#include <stdio.h>

int main()
{

printf("%d\n", 2+3);

printf("%d\n", 2-3);

printf("%d\n", 2*3);

printf("%d\n", 2/3);
/*
when 2 is divided by 3 answer is 0.666666...
 but here only integer part of the value will 
 be reported which is 0 here because we use "int"
 */

printf("%d\n", 8%3);
// remainder when 8 is divided by 3

    return 0;
}
