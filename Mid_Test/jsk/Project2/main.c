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

		printf("2개의 정수 입력; ");
		while (scanf("%d %d", &start, &end) == 2)
		{
			hap = sum(start, end);
			printf("%d부터 %d까지의 합: %d\n", start, end, hap);
			hap = 0;
			printf("2개의 정수 입력(끝내려면 q): ");
		}
		return 0;

	}

int main()
{
	int hap = 0;
	hap=sum(2, 90);
}