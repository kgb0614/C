#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int c;
	c = 5;
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

