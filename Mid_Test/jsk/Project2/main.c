#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

	int sum(int start, int end)
	{
		int hap = 0;
		for (int i = start; i <= end; i++)
			hap += i;
		return hap;
}

	int test()
	{
		int start, end, hap = 0;

		printf("2���� ���� �Է�; ");
		while (scanf("%d %d", &start, &end) == 2)
		{
			hap = sum(start, end);
			printf("%d���� %d������ ��: %d\n", start, end, hap);
			hap = 0;
			printf("2���� ���� �Է�(�������� q): ");
		}
		return 0;

	}

int main()
{
	int hap = 0;
	hap=sum(2, 90);
}