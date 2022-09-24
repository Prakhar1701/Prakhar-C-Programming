/*
STRINGS IN C:
String  is not a supported data type in C but it is a very useful concept used to model real world entities like name,city etc.
We express strings using an array of characters terminated by null character ('\0').
It is array of characters terminated by NULL character.
We need an extra character ('\0' or null character) to tell the compiler that the string ends here.
*/

#include <stdio.h>
void PrintStr(char string[])
{
    int i=0;
    while (string[i]!='\0')
    {
    printf("%c",string[i]);
    i++;
    }
    printf("\n");
   
}
int main()
{
    char str[]={'P','R','A','K','H','A','R','\0'};
    PrintStr(str);
    char stg[]="prakhar";
    PrintStr(stg);
    char input_str[30];
    gets(input_str);
    
    printf("Using printf :\n%s\n",input_str);
    printf("Using puts :\n");
    puts(input_str);
    printf("Using custom function:\n");
    PrintStr(input_str);
    return 0;
}
//THIS PROGRAM HAS MUCH TO KNOW PLEASE REFER VIDEO OR BOOK .