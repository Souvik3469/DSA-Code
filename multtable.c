#include <stdio.h>
//#include <conio.h>

void main() {

  int number;
  int i = 0;

//	clrscr();

	printf(" Program to Generate Multiplication Table :  ");

	printf("\n\n Enter number to generate Multiplication Table : ");
	scanf("%d", &number);
    
    printf("\n\nMultiplication Table of %d : \n",number);
    printf("=============================\n\n");

    for(i; i <11 ; i++) {
        printf("%d x %d = %ld \n\n",i,number, i*number);
    }
}