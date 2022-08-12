// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>


// int main() 
// {

//     int n,i,j;
   
//     scanf("%d", &n);
//     int l=(2*n)-1;
//   	// Complete the code to print the pattern.
//       for (i=1;i<=l;i++)
//       {
//           for( j=1;j<=l;j++)
//           {
              
//                   if(i==1||i==l||j==1||j==l)
//                   printf("%d ",n);
//                   else if(i==2||i==l-1||j==2||j==l-1)
//                   printf("%d ",n-1);
//                   else if(i==3||i==l-2||j==3||j==l-2)
//                   printf("%d ",n-2);
//                    else if(i==4||i==l-3||j==4||j==l-3)
//                   printf("%d ",n-3);
//                    else if(i==5||i==l-4||j==5||j==l-4)
//                   printf("%d ",n-4);
//                    else if(i==6||i==l-5||j==6||j==l-5)
//                   printf("%d ",n-5);
//                    else if(i==7||i==l-6||j==7||j==l-6)
//                   printf("%d ",n-6);
//                   else 
//                   printf("%d ",n-7);
//           }
          
//           printf("\n");
//       }
      
//     return 0;
// }


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}