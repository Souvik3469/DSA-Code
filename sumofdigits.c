#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{

    int number, sum = 0, temp_var;

    //    clrscr();

    printf("C Program to Calculate sum of Digits of Entered Number");

    printf("\n\n Enter Number : ");
    scanf("%i", &number);

    printf("\n\n Entered Number    : %i", number);

    // Logic to calculate sum

    while (number >= 1)
    {

        temp_var = number % 10; // get unit place digit
        sum = sum + temp_var;   // add them
        number = number / 10;   // remove the last digit
    }

    printf("\n\n Sum of Digits : %i", sum);
}
