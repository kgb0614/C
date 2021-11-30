#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int test01()
{
	for (int cnt = 1; cnt <= 5; cnt++)
	{
		printf("%d행 : ", cnt);
		for (int star = 1; star <= 6 - cnt; star++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

int test02()
{
	int n, m, num=1;
	printf("2개의 정수 입력 : ");
	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%3d", num++); 
		}
		printf("\n");
	}
	return 0;
}

int test03()
{
	int start, end, hap = 0;
	printf("2개의 정수 입력: ");
	scanf("%d %d", &start, &end);

	for (int i = start; i <= end; i++)
		hap += i;
	printf("%d부터 %d까지의 합 : %d\n", start, end, hap);

	return 0;
}

int sum(int start, int end)
{
	int hap = 0;
	for (int i = start; i <= end; i++)
		hap += i;
	return hap;
}

int test03_1()
{
	int start, end, hap = 0;
	printf("2개의 정수 입력: ");
	scanf("%d %d", &start, &end);

	hap = sum(start, end);
	printf("%d부터 %d까지의 합: %d\n", start, end, hap); 

	return 0;
}

int main()
{
	test03_1();
	/*int hap = 0;
	hap = sum(3, 7);
	printf("%d\n", hap);*/

	return 0;
}