// #include <stdio.h>
// int main ()
// {
// 	int i, n;

// 	int t1=0, t2=1; //initialise first and second terms
// 	int nextTerm=t1+t2; //initialise the next term (3rd term)

// 	printf("Enter the number of terms: "); //get no. of terms from user
// 	scanf ("%d", &n);

// 	printf ("Fibonacci Series: %d, %d, ", t1, t2); //print the first two terms t1 and t2

// 	for (i=3; i<=n; ++i)
// 	{
// 		printf("%d, ", nextTerm);
// 		t1=t2;
// 		t2=nextTerm;
// 		nextTerm=t1+t2;
// 	}
// 	return 0;
// }
#include<stdio.h>
int fib(int n)
{
	if(n==0||n==1)
	{
		return n;
	}
	return fib(n-1)+fib(n-2);
}

int main()
{
	int n;
	scanf("%d ",&n);
	printf("%d",fib(n));
	return 0;
}