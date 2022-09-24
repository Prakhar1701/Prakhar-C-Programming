#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h  ;
    printf("Enter Number a\n");
    scanf("%d" , &a);
    printf("Enter Number b\n");
    scanf("%d" , &b);

   c= (" %d\n", a==b);

   d= (" %d\n", a!=b);

   e= (" %d\n", a>b); 
   f= (" %d\n", a<b);

   g= (" %d\n", a>=b);

   h= (" %d\n", a<=b);

      printf("%d\n",c&&d);  

      printf("%d\n",c||d);  

      printf("%d\n",!h);  
    
    return 0;

}