// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char c[30],a[30];
// 	int i,n,j;
// 	int p,c2=0;
// 	printf("Enter the name : ");
// 	scanf("%[^\n]",c);
// 	n=strlen(c);
// 	c[n]=' ';
// 	c[n+1]=NULL;
// 	p=n;
// 	a[n+1]=NULL;
// 	for(i=0;i<n+1;i++)
// 	{
// 		if(c[i]==' ')
// 		{
// 			for(j=i-1;j>=c2;j--)
// 			{
// 				p=p-1;
// 				a[p]=c[j];
// 			}
// 			c2=i+1;
// 			p=p-1;
// 			a[p]=' ';
// 		}
// 	}
// 	for(i=0;i<n;i++)
// 	printf("%c",a[i]);
// }
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[100], reverse[100];
    int len, i, index, wordStart, wordEnd;

    printf("Enter any string: ");
    gets(str);

    len   = strlen(str);
    index = 0;

    // Start checking of words from the end of string
    wordStart = len - 1;
    wordEnd   = len - 1;

    while(wordStart > 0)
    {
        // If a word is found
        if(str[wordStart] == ' ')
        {
            // Add the word to the reverse string
            i = wordStart + 1;
            while(i <= wordEnd)
            {
                reverse[index] = str[i];

                i++;
                index++;
            }
            reverse[index++] = ' ';

            wordEnd = wordStart - 1;
        }

        wordStart--;
    }

    // Finally add the last word
    for(i=0; i<=wordEnd; i++)
    {
        reverse[index] = str[i];
        index++;
    }

    // Add NULL character at the end of reverse string
    reverse[index] = '\0'; 

    printf("Original string \n%s\n\n", str);
    printf("Reverse ordered words \n%s", reverse);

    return 0;
}