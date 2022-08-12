#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{

    int n1, n2, n3;
    int max_no;

    //    clrscr();

    printf("C Program to Find Greatest Number amound 3 Entered Number");

    printf("\n\n Enter Number 1: ");
    scanf("%i", &n1);

    printf("\n\n Enter Number 2: ");
    scanf("%i", &n2);

    printf("\n\n Enter Number 3: ");
    scanf("%i", &n3);

    // Logic to find Greatest Number

    // max_no = n1;
    // (max_no < n2) && (max_no = n2);
    // (max_no < n3) && (max_no = n3);

    //using ternary
    //(number1 > number2) ? printf("\n\n  %d is greater then %d",number1,number2) : printf("\n\n %d is greater then %d",number2,number1);

    if (n1 > n2)
    {
        if (n1 > n3)
        {

            max_no = n1;
        }

        else
        {

            max_no = n3;
        }
    }

    else if (n2 > n3)
    {

        max_no = n2;
    }
    else
    {
        max_no = n3;
    }

    printf("\n\n Greatest among Numbers %i,%i and %i : %i", n1, n2, n3, max_no);
}
