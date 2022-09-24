//THIS PROGRAME IS FOR VARIABLES :-
#include <stdio.h>
extern int b;
extern int c;


/*
    Variable 'b' & 'c' is declared globally in this programe and can be used onward in this program anywhere if defined anywhere globally in this program or linked program files.
    */
int xyz()
{

    extern int a;
    c = 100;
    // Here the value of variable 'c' is changed locally in this function.

    /*
    Variable 'a' is declared here in xyz() function and can be used onward in xyz() function if defined anywhere globally in this program or linked program files.
    */
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
}

int main()
{

    extern int a;

    /*
    Variable 'a' is declared here in main() function and can be used onward in main() function if defined anywhere globally in this program or linked program files.
    */
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    xyz();

    return 0;
}
//Definition of variable a,b&c :
//Here memory for variable a,b &c is allocated.
int a = 17;
int b = 5;
int c = 15;
/*
FOR FULL INFORMATION FOLLOW THE PROVIDED LINKS OF :
1. STORAGES CLASSES IN C
2. DIFFERENCE BETWEEN DECLARATION AND DEFINATION
*/
