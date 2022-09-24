//ARRAY(2D):

#include <stdio.h>

int main()
{
    int marks[2][4] = {{12, 43, 65, 67},
                       {23, 12, 55, 78}};

        for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            printf("The value of %d,%d element of the array is %d\n", i, j, marks[i][j]);
        }
    }

    return 0;
}