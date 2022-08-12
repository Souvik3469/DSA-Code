#include <stdio.h>
#include <string.h>
#include <stdlib.h> // without using temp
void main()
{

    int number_a;
    int number_b;
    int a,b,c;

    //    clrscr();

    printf("C Program to Swap values to two variables without without using temp variable :  ");

    printf("\n\n Enter value for variable A  : ");
    scanf("%i", &number_a);

    printf("\n\n Enter value for variable B  : ");
    scanf("%i", &number_b);

    printf("\n\n Before Swapping => Value A : %i    B : %i ", number_a, number_b);

    // Swapping logic

    // number_a = number_a + number_b;
    // number_b = number_a - number_b;
    // number_a = number_a - number_b;

    

    printf("\n\n After Swapping => Value A : %i    B : %i ", number_a, number_b);
  
}

//	getch();
