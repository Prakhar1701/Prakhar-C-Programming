 #include<stdio.h>

 int main()
 {
int age;

     printf("Enter your age :\n");

     scanf("%d",&age);
     printf("you have entered your age as %d\n",age);

     if(age>=60)
     {
     printf("You are a seniour citizen and obesiouly you can vote.");
     }

     else if(age >=18)
     //here no need to set higher limit as if age is >=60 the "if" condition will have been met already.
     {
     printf("You are not a seniour citizen but you can vote.");
     }
     else
     {
     printf("Sorry you can not vote.");
     }
     return 0;
 }