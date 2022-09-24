//ARRAY(1D):

#include <stdio.h>

int main()
{
    int marks[4];
    marks[0] = 34;
    printf("marks of student 1 is %d\n", marks[0]);

    marks[0] = 45;
    printf("marks of student 1 is %d\n", marks[0]);

 //-------------------------------------------------------------------------------------------------------------------

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element of the array : \n", i);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of the array is %d.\n", i, marks[i]);
    }

//------------------------------------------------------------------------------------------------------------------

 int array[]={34,45,2,31};        
 //Here  size is not nessary.

    for (int i = 0; i < 4; i++)
    {
        printf("\nThe value of %d element of the array is %d.\n", i, array[i]);
    }

 return 0;
}