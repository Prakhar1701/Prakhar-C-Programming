//( Variable : Meaning)
/*
rA : number of rows in matrix A.
cA : number of columns in matrix A.
rB : number of rows in matrix B.
cB : number of columns in matrix B.
eA : number of elements in martix A.
eB : number of elements in martix B.
rMO : number of rows in matrix obtained with multiplication of matrix A & B.
cMO : number of columns in matrix obtained with multiplication of matrix A & B.
eMO : number of elements in martix obtained.
element : value of element of obtained matrix after each calculation.
sum : used in between for calculation of each element of the obtained matrix.
ele_calc : number of times "sum" will be added to "element".
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rA, cA, rB, cB, eA, eB, rMO, cMO, eMO, ele_calc, element, sum;
    printf("Enter number of row(s) and column(s) in matrix A :\n");
    scanf("%d%d", &rA, &cA);
    printf("Enter number of row(s) and column(s) in matrix B :\n");
    scanf("%d%d", &rB, &cB);
    eA = rA * cA;
    eB = rB * cB;
    if ((cA == rB) && (rA > 0) && (cA > 0) && (rB > 0) && (cB > 0))
    {
        ele_calc = cA = rB;
        rMO = rA;
        cMO = cB;
        eMO = rMO * cMO;

        int *ptrA = (int *)calloc(eA, sizeof(int));
        int *ptrB = (int *)calloc(eB, sizeof(int));

        printf("Enter the elements of matrix A ,entry should be row wise :\n");

        for (int i = 0; i < eA; i++)
        {
            scanf("%d", ptrA + i);
            //Q-why can not do 'ptrA++;'
        }

        printf("Enter the elements of matrix B ,entry should be row wise :\n");

        for (int i = 0; i < eB; i++)
        {
            scanf("%d", ptrB + i);
            //Q-why can not do 'ptrB++;'
        }
        //Now the complex code:
        //--------------------------------------------------------------------------------------------------
        printf("The matrix obtained by multipication of matrix A and B is of order(%d X %d)\nand has a total of %d element(s):\n\n", rMO, cMO, eMO);
        for (int h = 0; h < rMO; h++)
        {
            for (int i = 0; i < cMO; i++)
            {
                element = 0;
                for (int j = 0; j < ele_calc; j++)
                {
                    sum = (*(ptrA + (h * cA) + j)) * (*(ptrB + (j * cB) + i));
                    element += sum;
                }
                printf("%d\t", element);
            }
            printf("\n");
        }
        printf("\n");
        //--------------------------------------------------------------------------------------------------
        free(ptrA);
        free(ptrB);
    }
    else if ((rA > 0) && (cA > 0) && (rB > 0) && (cB > 0))
    {
        printf("Multiplication of matrix A & B with given row and column is not possible.\n");
    }
    else
    {
        printf("Your input for row and/or column of maxtrix A and/or B is invalid.\n");
    }
    return 0;
}
//THIS IS SELF MADE PROGRAM.
//REFER TO VIDEO FOR ORIGINAL PROGRAM.

