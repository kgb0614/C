#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "test01.h"



int test02()
{
	int a, b, c, d, e;
	printf("정수 5개를 입력하시오: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	printf("입력 받은 수는 %d\n", &a);
	printf("입력 받은 수는 %d\n", &b);
	printf("입력 받은 수는 %d\n", &c);
	printf("입력 받은 수는 %d\n", &d);
	printf("입력 받은 수는 %d\n", &e);

	printf("정수 5개의 합은: ");
	scanf("%d+%d+%d+%d+%d = %d", &a, &b, &c, &d, &e);

}


void menu()
{
	printf("***************************************************\n");
	printf("*                계산기 프로그램                   *\n");
	printf("---------------------------------------------------\n");
	printf("*                  사용 예                         *\n");
	printf("*          정수 2개와 연산기호를 입력하시오         *\n");
	printf("***************************************************\n");
}
int calculator(int x, char op, int y);
{
	switch (op)
	{
	case '+': return add(x, y); break;
	case '-': return sub(x, y); break;
	case '*': return mul(x, y); break;
	case '/': return div(x, y); break;
	}
}

int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}

int test01(void)
{
	int x, y; char op;
	int calculator(int x, char op, int y);

	printf("정수 2개 입력(끝내려면 q): ");
	while (scanf("%d %d", &x, &y) == 2) {
		printf("연산기호: "); scanf_s(" %c", &op);
		if (op == '/' && y == 0) {
			printf("0으로 나누지 못함!\n");
			printf("정수 2개 입력 (끝내려면 q): ");
			continue;
		}
		if (op == '+' || op == '-' || op == '*' || op == '/')
			printf("%d %c %d = %d\n\n\n", x, op, y, caculator(x, op, y));
		else {
			printf("올바른 연산자를 입력하시오 :\n");
			printf("정수 2개 입력 (끝내려면 q): ");
			continue;
		}
		menu();
		printf("정수 2개 입력 (끝내려면 q): ");
	}
	return 0;
}


int main()
{
	test02();
	return 0;
}
