#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{

    // long number = 0;
    // int temp_var = 0;
    // int i = 1;

    // // clrscr();

    // printf("C Program to Print Individual digits of a number :-");

    // printf("\n\n Enter a number (5 digits or more) : ");
    // scanf("%i", &number);

    // while (number >= 1)
    // {

    //     temp_var = number % 10; // get unit place digit

    //     printf("\n\n Digit at %d place => %d  ", i, temp_var);
    //     number = number / 10; // remove the units place

    //     i++;
    // }
    int n,d,r=0, di,c=0;
    printf("\n\n Enter a number (5 digits or more) : ");
     scanf("%d", &n);
     while (n >0)
    {

        //c++;
        d=n%10;
        r=r*10+d;
        n = n/ 10; 
        

    }
    while (r>0)
    {
        di=r%10;
        printf("%d\n",di);
        r=r/10;
    }
   //printf("%d\n",c);
}