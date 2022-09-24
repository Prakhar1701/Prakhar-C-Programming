//Files are used to store data and information.
//Files are used to read & access data anytime from the hard disk.
//Files make it easy for a programmer to access and store content without losing it on program termination.
#include <stdio.h>
int main()
{
    FILE *ptr =NULL;
    char string[50];
    char str[10] = "prakhar";
    //READING A FILE :
    ptr = fopen("T62-T64File1(reading).txt", "r");
    //In case file do not exist , fopen() returns NULL .
    if (ptr != NULL)
    {
        fscanf(ptr, "%s", string);
        printf("~~~%s~~~\n", string);
        fclose(ptr);
    }
    else if (ptr == NULL)
    {
        printf("The file with the given name ( T62-T64File1(reading).txt )does not exist.\n");
    }

    //WRITING A FILE :
    ptr = fopen("T62-T64File1(writing).txt", "w");
    // A file is created in case  no file exist with the given name.

    fprintf(ptr, "%s", str);
    fclose(ptr);

    return 0;
}
//Refer to the avaliable  LINK , video and pdf file for full information.
