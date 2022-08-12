#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{

   char ch;

   // clrscr();

   printf("C Program to Find Entered Character is a Vowel or Consonant.");

   printf("\n\n Enter character : ");
   scanf("%c", &ch);

   // Logic to find Vowel/Consonant

   if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
   {

      printf("\n\n %c is a Vowel!! ", ch);
   }
   else
   {

      printf("\n\n %c is a Consonant!! ", ch);
   }
}
// switch(ch)  {

//      case 'a' || 'e' || 'i' || 'o' || 'u' :
//           printf("\n\n %c is a Vowel!! ",ch);
//      break;

//     case  'A' || 'E' || 'I' || 'O' || 'U' :
//           printf("\n\n %c is a Vowel!! ",ch);
//      break;

//    default:
//        printf("\n\n %c is a Consonant!! ",ch);

// }
