//STATIC VARIABLE
#include <stdio.h>
int stat()

{
    static int a=5;
    //DEFALT VALUE OF A STATIC VARIABLE IS "0".
    a++;
    return a;
}
int main()
{
    int a;
    for (int i = 0; i < 5; i++)
    {
        a = stat();
        printf("%d\n", a);
    }

    return 0;
}