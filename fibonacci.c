
#include<stdio.h>
int main()
{
    // int n,i,a,b,c;
    // printf("Enter a number: ");
    // scanf("%d",&n);
    // a=0;
    // b=1;
    // for(i=1;i<=n;i++)
    // {
    //     printf("%d ",a);
    //     c = a + b;
    //     a = b;
    //     b = c;
    // }


    
 int first_no = 0;
 int second_no = 1;
 int next_no;
 int i;
 
 
   printf("C program prints 1st 1-100 Fibonacci series : ");
 
   for ( i = 0 ; i < 100 ; i++ )
   {
       
      if ( i <= 1 )
         next_no = i;
      else
      {
         next_no = first_no + second_no;
         first_no = second_no;
         second_no = next_no;
         
         if(next_no > 100) {
             break;
         }
      }
      printf("%d  ",next_no);
   }
    return 0;
}