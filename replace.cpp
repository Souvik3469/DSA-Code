#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
    char s[1000],c1[100],c2[100],str1[100],str2[100],str[100],test[100];
    int  i,j,lr,l1,l2,c;
 
    printf("Enter  the string : ");
    gets(s);
	printf("Enter a character replace: ");
    gets(c1);
    printf("\nEnter character to replace : ");
    gets(c2);
    printf("\nBefore replace:%s",s);
    lr=strlen(s);
    l1=strlen(c1);
    l2=strlen(c2);
    for (i=0;i<(lr-l1);i++)
    {
    	c=0;
    	for (j=i;j<(i+l1);j++)
    	test[c++]=s[j];
    	if (strcmp(test,c1)==0)
    	{
    		c=0;
    		for (j=0;j<i;j++)
    		{
    			str1[c++]=s[j];
			}
			c=0;
			for (j=(i+l1);j<lr;j++)
			{
				str2[c++]=s[j];
			}
		}
	}
	
	strcat(str1,c2);
	strcat(str1,str2);
    printf("\nAfter replace:%s",str1);
 	
	getch();
	return 0;
}
