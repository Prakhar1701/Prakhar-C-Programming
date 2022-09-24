#include <stdio.h>
int main()
//ARRAYS AND POINTERS ARITHMETIC IN C :
{
    //POINTER ARITHMETIC:
    /*
    THERE ARE TOTAL FOUR ARITHMETIC OPETATORS THAT CAN BE USED ON POINTERS:
    (1) ++(incrementing the value by one)
    (2) --(decrementing the value by one)
    (3) +(adding some value)
    (4) -(decreasing some value)
    */
    //WE CAN NOT DO INCREMENT OR DECREMENT TO THE VALUE OF A CONSTANT BUT WE CAN ADD OR SUBTRACT SOME VALUE TO IT.--(imp.)
    int a = 34;
    int *ptra = &a;
    printf("%d\n", ptra);
    printf("%d\n", ptra + 1);
    ptra++; // (ptra++;) == (ptra=ptra+1;)
    printf("%d\n", ptra);
    printf("\n");
    char b = '3';
    char *ptr = &b;
    printf("%d\n", ptr);
    printf("%d\n", ptr - 1);
    ptr--; // (ptra--;) == (ptra=ptra-1;)
    printf("%d\n", ptr);
    printf("\n");
    //ARRAYS AND POINTERS:
    int array[4] = {32, 67, 5, 10};
    //Writing array[i] is same as *(array+i)-------------------(imp.)
    /*
    (ary+1) ==(ary+ 1x(size of type))  NOTE ary OR (ary+0) OR (&ary[0]) IS THE ADDRESS OF FIRST ELEMENT OF ARRAY.
                                   THE type CAN BE int ,float ,charector ,ETC.
                                   SIZE DEPENDS ON TYPE AND ALSO ON ARCHITECTURE.
    */
    //--------------------------------------------------------(imp.)

    int *pr = array; //Here pr is storing the address of first element of the array.
    printf("%d\n", *array);

    //*array is same as array[0]
    printf("%d\n", *(array + 1));
    // *(array+1) is same as array[1]
    printf("%d\n", *array + 1);
    //*array+1 is same as array[0]+1

    /*(1)*/ printf("%d\n", array);
    /*(2)*/ printf("%d\n", pr);
    /*The above two are same and would print the same result which is address 
    of first element of array.*/

    printf("%d\n", *pr);
    pr++;
    printf("%d\n", *(pr + 1));
    printf("%d\n", *pr + 1);

    //(pr + 1) is same as (array + 1) witch  is address  of the second element of array.
    /* array++; or array--; is invalide and throw a error because array is a constant and we cannot increase or decrease its value.*/

    return 0;
}