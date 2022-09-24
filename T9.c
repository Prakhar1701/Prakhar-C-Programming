 #include <stdio.h>
 #define c 3.14

int main()
{
  const int a = 8;
        float b = 7.333;

  // a=4;  can not do this as a is already defined as a constant.

  // c=7.33;   can not do this as c is a constant.

  printf("%f\n",c);

  /* 
  SOME FORMAT SPECIFIER ARE:

   %c  : character
   %d  : integer
   %f  : float
   %l  : long integer
   %lf : double 
   %LF : long double
   */


    printf("The value of a is %d and the value of b is %f\a\n" ,a,b);

    printf("%0.4f\n",b);
    printf("%0.0f\n",b);
    printf("%0.2f\n",b);
    printf("%10f\n",b);
    printf("%10.0f\n",b);
    printf("%4.4f\n",b);
    printf("%-10.4fprakhar\n",b);

    printf ("prakhar \\n\n");
    printf ("prakhar \\\n");

    //some important space sequences in c:

    printf ("prakhar\aagrawal\n");//not working dought
    printf ("prakhar\bagrawal\n");//not working dought,or can't detect the work
    printf ("prakhar\nagrawal\n");
    printf ("prakhar\tagrawal\n");
    printf ("prakhar\\agawal\n");
    printf ("prakhar\'agrawal\n");
    printf ("prakhar\"agrawal\n");
    
    
    return 0;

}