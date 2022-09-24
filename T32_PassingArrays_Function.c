// We pass arrays to a function when we need to pass a list of values to a given function.
/*
We can pass the arrays to a function:
(1)By declaring array as a parameter in the function.
(2)By declaring a pointer in the function to hold the base address of the array. 
*/

#include <stdio.h>
void func1(int array[]) //*NOT FOR SURE* that entering size of array here has no meaning.
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at index=%d is %d\n", i, array[i]);
    }
    array[0] = 382; //If you change any value here the chance will be gets reflected in the main function.----(imp.)
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at index=%d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 382; //Here also,if you change any value here the chance will be gets reflected in the main function.----(imp.)
}

void func3(int array[][2]) //Here atleast we have to enter THE size of 2nd dimention of the array.
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at index= %d,%d is %d .\n", i, j, array[i][j]);
        }
    }
}
void main()
//In all the programs before we have returned some value from the main function but it can be void function also until we do not want to use the returned value from the function.
{

    int arr[] = {23, 13, 3, 4};

    //(1)--------------------------------------------------:
    printf("The value at index 0 is %d\n", arr[0]);
    func1(arr); //HERE WE ARE PASSING THE ARRAY(arr) TO THE FUNCTION(func1) BY PROVIDING ITS NAME .
    printf("The value at index 0 after calling the functon(func1) is %d\n", arr[0]);

    printf("\n");

    //(2)---------------------------------------------------:
    int ary[] = {21, 45, 3, 46};
    func2(ary); //HERE WE ARE PASSING THE BASE ADDRESS OF THE ARRAY(ary) TO THE FUNCTION(func2).
    printf("The value at index 2 after calling the function(func2) is %d\n", ary[2]);

    printf("\n");

    //--------------------------------------------------------------------------------------------------------------------------------
    //PASSING A 2D ARRAY BY USING THE 1st METHOD:
    int two_D_array[][2] = {{2, 17},
                            {5, 19}};
    func3(two_D_array);
}