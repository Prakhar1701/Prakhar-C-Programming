//IMPORTANT:

#include <stdio.h>
#include <string.h>
struct student
/*HERE THIS STRUCTURE IS A GLOBAL STRUCTURE DATATYPE AND CAN BE USED IN ANY OF THE FUNCTIONS.*/
{
    int id;
    int marks;
    char fav_char;
    char name[50];
} shubham; //we can also immediately create variable here after creating structure.
#include <stdio.h>
struct student ravi; //(GLOBAL VARIABLE HERE):NOT IN ANY FUNCTION.
//CAN BE CALLED FROM ANY FUNCTION.

int main()
{
    struct student harry; //(LOCAL VARIABLE HERE):IN MIN FUNCTION.
    //CAN BE CALLED  ONLY FROM THIS  MAIN FUNCTION.
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 11;
    ravi.marks = 12;
    shubham.marks = 13;
    harry.fav_char = 'x';
    ravi.fav_char = 'y';
    shubham.fav_char = 'z';
    strcpy(harry.name, "Harry Potter student of the year");
    strcpy(ravi.name, "Ravi Ranjan");
    strcpy(shubham.name, "Shubham Kumar");

    /*QUICK QUIZ:
    PRINTING FULL DATA OF  STUDENTS*/
    printf("HARRY id is %d.\n", harry.id);
    printf("HARRY marks is %d.\n", harry.marks);
    printf("HARRY favourite character is %c\n", harry.fav_char);
    printf("HARRY name is %s.\n", harry.name);
    printf("\n");
    printf("RAVI id is %d.\n", ravi.id);
    printf("RAVI marks is %d.\n", ravi.marks);
    printf("RAVI favourite character is %c\n", ravi.fav_char);
    printf("RAVI name is %s.\n", ravi.name);
    printf("\n");
    printf("SHUBHAM id is %d.\n", shubham.id);
    printf("SHUBHAM marks is %d.\n", shubham.marks);
    printf("SHUBHAM favourite character is %c\n", shubham.fav_char);
    printf("SHUBHAM name is %s.\n", shubham.name);
    return 0;
}
