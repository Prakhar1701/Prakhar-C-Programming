#include <stdio.h>

int main()
{
  //POINTERS:
  /*
      POINTERS ARE ARE OF TWO TYPES :
      1.TYPED POINTERS
      2.UNTYPED POINTERS
      */
  //Refer to book or video for complete explanation or discussion.
  printf("Lets learn about pointers:\n");
  int a = 76;
  int *ptra;
  ptra = &a;
  int *ptra2 = NULL; //THIS IS A NULL POINTER.

  printf("The address of a is %p\n", &a);
  printf("The address of a is %p\n", ptra);
  printf("The address of pointer to a is %p\n", &ptra);
  printf("The value of a is %d\n", *ptra);
  printf("The value of a is %d\n", a);

  printf("The address of NULL POINTER is %p\n", ptra2);
  

  return 0;
}
/*
//We can also create a pointer to pointer like:
datatype ** ptra1:
ptra1 = &ptra;
//NOW ptra1 POINTER STORES ADDRESS OF ptra POINTER .
//This chain can be followed for pointing any number of pointers to each other.
*/