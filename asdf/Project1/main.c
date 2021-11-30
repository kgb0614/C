#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "test1.h"


int test1()
{
	int x, y; char op; //지역변수와 전역변수

	menu();
	printf("정수 2개 입력(끝내려면 q): ");
	while (scanf("%d %d", &x, &y) == 2)
	{
		printf("연산기호: "); scanf(" %c", &op);
		if (op == '/' && y == 0) // && = and
		{
			printf("0으로 나누지 못함!\n");
			printf("정수 2개 입력(끝내려면 q): ");
			continue; // 밑의 코드를 실행하지않고 다시 while로 돌아감
		}
		if (op == '+' || op == '-' || op == '*' || op == '/') // || = or 
			printf("%d %c %d = %d\n\n\n", x, op, y, calculator(x, op, y));
		else
		{
			printf("올바른 연산자를 입력하시오: ");
			printf("정수 2개 입력(끝내려면 q): ");
			continue;
		}
		menu();
		printf("정수 2개 입력(끝내려면 q): ");
	}


	return 0;
}


int main()
{
	int test1();
	return 0;
}
