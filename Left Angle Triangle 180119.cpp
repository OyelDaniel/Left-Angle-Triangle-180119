#include "stdio.h"
int main()
{
	int i;
	int j;
	for(i=1; i<6; i++) //excremental loop
	{
		for(j=5; j>0; j--) //decremental loop
		{
			if(j<=i)
			printf("*");
			
			else
			printf(" ");
		}
		printf("\n");
	}
}
