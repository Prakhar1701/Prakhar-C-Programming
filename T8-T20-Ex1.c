/*(Ex1)Q-Print the multiplication table of a integer number entered by the user in pretty form.*/

#include <stdio.h>

int main()
{
    int a;

    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &a);

    printf("The table of %d is:\n\n", a);

    printf("%dx1 =%d\n", a, a * 1);
    printf("%dx2 =%d\n", a, a * 2);
    printf("%dx3 =%d\n", a, a * 3);
    printf("%dx4 =%d\n", a, a * 4);
    printf("%dx5 =%d\n", a, a * 5);
    printf("%dx6 =%d\n", a, a * 6);
    printf("%dx7 =%d\n", a, a * 7);
    printf("%dx8 =%d\n", a, a * 8);
    printf("%dx9 =%d\n", a, a * 9);
    printf("%dx10=%d\n\n", a, a * 10);

    //An another method by using loop (for loop) :

    for (int i = 1; i <= 10; i++)
    {
        printf("%dx%d =%d\n", a, i, a * i);
    }

    return 0;
}
