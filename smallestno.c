#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{

    int n1, n2, n3;
    int smallest_no;
    int temp;

    //    clrscr();

    printf("C Program to Find Smallest Number amound 3 Entered Number");

    printf("\n\n Enter Number 1: ");
    scanf("%i", &n1);

    printf("\n\n Enter Number 2: ");
    scanf("%i", &n2);

    printf("\n\n Enter Number 3: ");
    scanf("%i", &n3);

    // Logic to find Smallest Number

    if (n1 < n2)
    {
        if (n1 < n3)
        {

            smallest_no = n1;
        }

        else
        {

            smallest_no = n3;
        }
    }

    else if (n2 < n3)
    {

        smallest_no = n2;
    }
    else
    {
        smallest_no = n3;
    }

    printf("\n\n Smallest Among Numbers %i,%i and %i : %i", n1, n2, n3, smallest_no);
}
