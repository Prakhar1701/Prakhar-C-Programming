#include<stdio.h>

int main()
{
    int a,b ;
    printf("Enter Number a\n");
    scanf("%d" , &a);
    printf("Enter Number b\n");
    scanf("%d" , &b);


      printf("%d\n",a&&b); 
// Logical AND operator.If both the operands are non-zero,then the condition is true(1). 

      printf("%d\n",a||b); 
// Logical OR operator.If any of these two operands is non-zero, then condition becomes true(1). 

      printf("%d\n",!a); 

      printf("%d\n",!b);
/*Logical NOT Operator.It is used to reverse the logic state of its operand If condition is 
  true(1), then Logic NOT operator will make it false(0).*/ 
    
    return 0;
}