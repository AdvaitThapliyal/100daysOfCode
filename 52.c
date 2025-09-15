/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

* */



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		if(i<=5)
		{
			if(i%2!=0)
			{
				for(j=0;j<i;j++)
				printf("*\n");
                printf("\n");
			}
		}
		if(i>5 && i<=9)
		{
			if(i%2!=0)
			{
				for(j=i;j<=9;j++)
				printf("*\n");
				printf("\n");
				
			}
		}
	}
	return 0;
}