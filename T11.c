#include <stdio.h>
int main()
{

    int age;

    printf("Enter your age:\n");
    scanf("%d", &age);

    //switch:

    switch (age)
    {
        //ONLY CONSTANT EXPRESSION IS ALLOWED IN CASE STATEMENT.
    case 3:
        printf("Age is 3\n");
        break;

    case 13:
        printf("Age is 13\n");
        break;

    case 23:
        printf("Age is 23\n");
        break;

    default:
        printf("Age is not 3,13 or 23\n");
        break; //here appling break has no meaning.
    }

    //------------------------------------------------------------------------------------------------------------------------

    // switch when break is removed fully or partially :
    switch (age)
    {
    case 3:
        printf("Age is 3\n");
        /*if no break then all the following cases will execute including default if there is no break
         in in following cases also.*/

    case 13:
        printf("Age is 13\n");
        break;

    case 23:
        printf("Age is 23\n");
        break;

    default:
        printf("Age is not 3,13 or 23\n");
        break; //here appling break has no meaning.
    }

    //------------------------------------------------------------------------------------------------------------------------

    //nested switch:  (e.g. switch in switch)

    // to see nested switch please enter your age equal to 3(this is according to code,hence to universal)

    int marks;

    switch (age)
    {
    case 3:
        printf("Age is 3\n");

        int marks;

        printf("Enter your marks:\n");
        scanf("%d", &marks);

        switch (marks)
        {
        case 45:
            printf("Your marks are 45\n");
            break;

        default:
            printf("Your marks are not 45\n");
            break;
        }
        break;

    case 13:
        printf("Age is 13\n");
        break;

    case 23:
        printf("Age is 23\n");
        break;

    default:
        printf("Age is not 3,13 or 23\n");
        break; //here appling break has no meaning.
    }

    return 0;
}
