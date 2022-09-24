#include <stdio.h>

void arayRev(int array[])
{
for (int i = 0,j=6; i < 4; i++,j--)
{
   array[i]=array[j];
   array[j]=i+1;
}


}
int main()
{
    int arr[7]={1,2,3,4,5,6,67};
    for (int i = 0; i < 7; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n\n");
    arayRev(arr);
     for (int i = 0; i < 7; i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}//THIS ERERCISE IS SELF SOLVED ,ORIGINAL SOLUTION CAN BE IMPORTED FOR VIDEO.