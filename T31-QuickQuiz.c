/*Q-Given two numbers  a=4  and  b=3, add them then subtract them and assine them to a and b by using call by refrence.*/
#include <stdio.h>

void add_sub(int *x, int *y)
{
   *x=*x+*y;
   *y=(*x-*y)-*y;
}

int main()

{
   int a=4,b=3;
   printf("The given value of a and b is %d and  %d repectively.\n",a,b);
   add_sub(&a,&b);//Calling by refrence.
   printf("a+b=%d\n",a);
   printf("a-b=%d\n",b);
    return 0;
}