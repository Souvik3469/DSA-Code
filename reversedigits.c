#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main() {

   int number,rev_num=0,temp_var;
  

//    clrscr();

    printf("C Program to Generate reverse of a Number");

    printf("\n\n Enter Number : ");
    scanf("%i", &number);
    
    printf("\n\n Number           : %i",number);
     
     
   //Logic to reverse a number
   
   while(number >=1 ) {
       
      temp_var = number%10; //get unit place digit
      rev_num = rev_num*10+temp_var; //append above digit to reverse digit 
      number = number/10; //remove the last digit
       
       
   }
    
   
printf("\n\n  Reversed of Number : %i", rev_num);
    

}