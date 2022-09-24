//Q-PRINT STAR PATTER & REVERSE STAR PATTERN.

#include <stdio.h>
/*We can put all code in main function, but here we are making two functions to solve this exercise because if needed we can include these functions in further programs also,this is a cleaver approach to creat a program.*/
void tri_starpattern(int row)
{
   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j <= i; j++)
      {
         printf("*");
      }
      printf("\n");
   }
}
void reverse_tri_starpattern(int row)
{
   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j <= row - i - 1; j++)
      {
         printf("*");
      }
      printf("\n");
   }
}

int main()
{
   int type, row;
start:
   printf("\nEnter \"0\" or \"1\" to print 'Triangular Star Pattern' or 'Reverse Triangular Star Pattern' respectively.\n (You may press \"5\" to terminate the program):\n");

   scanf("%d", &type);

   if (type == 0) //WE CAN ALSO USE SWITCH-CASE STATEMENTS HERE INSPITE OF IF-ELSE STATEMENTS.
   {
      printf("How many rows do you want to print?\n");
      scanf("%d", &row);
      tri_starpattern(row);
      goto start;
   }
   else if (type == 1)
   {
      printf("How many rows do you want to print?\n");
      scanf("%d", &row);
      reverse_tri_starpattern(row);
      goto start;
   }
   else if (type == 5)
   {
      printf("The program has been terminated.\n");
      goto end;
   }
   else
   {
      printf("Your input is invalid.\n");
      goto start;
   }
end:
   return 0;
}