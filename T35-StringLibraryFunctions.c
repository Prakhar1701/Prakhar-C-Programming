#include <stdio.h>
#include <string.h>

int main()
{
    //HERE WE ARE GOING TO SEE SOME IMPORTANT FUNCTIONS IN STRING LIBRARY:

    char s1[] = {'p', 'r', 'a', 'k', 'h', 'a', 'r', '\0'};
    char s2[] = "agrawal";
    char s3[30];

    printf("The lenght of s1 string is  %d\n", strlen(s1));
    printf("The lenght of s2 string is  %d\n", strlen(s2));
    printf("\n");

    printf("The reversed string s1 is:\n");
    printf("%s\n", strrev(s1));
    printf("The reversed string s2 is:\n");
    puts(strrev(s2));

    printf("\n");
    puts(strcat(s1, s2));
    printf("\n");

    strcpy(s3, s1);
    puts(s3);
    printf("\n");

    printf("The strcmp for s1 , s2 returned %d\n",strcmp(s1,s2));
    printf("\n");

    return 0;
}//PLEASE REFER VIDEO OF BOOK FOR FULL DETAILS OF THE TOPIC.

