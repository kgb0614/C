#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int t4(void)
{
	int i = 1;
	int j = 0;

	
	while (i <= 5)
	{
		j = 0;
				while (j < i)
		{
			printf("*");
			++j;
		}
		printf("\n");
		++i;
	}

	return 0;
}
int t5()
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
int t6()
{
	int count,hap=0;
	for (count = 2; count <= 10; count+=2)
	{
		hap += count;
		printf("%d���� ���� hap= %d\n", count, hap);
	}
	printf("��: %d\n", hap);
	return 0;
}
int t7()
{
	int n;
	printf("���� �Է�: ");
	while (scanf("%d", &n) == 1)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= 9; j++)
			{
				printf("%d x %d = %d\n", i, j, (i * j));
			}
			printf("�����Է� ");
		}

		return 0;
	}
}
int t8()
{
	printf("2���� ���� �Է�: ");
	int n = 0, m = 0, c = 0;
	int cnt = 0;

	
	scanf("%d %d", &m, &n);
	c = m * n;

	for (int i = 1; i <= c; i++)
	{
		printf("%d ", i);
		cnt++;
		if (cnt == m) {
			printf("\n");
			cnt = 0;
		}
	}


	return 0;
}
int t9() {
	int num1, num2;

	printf("2���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);
		printf("��: %d\n", num1 + num2);

	return 0;
}



int main()
{
	t8();
	return 0;
}

