#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "test01.h"



int test02()
{
	int a, b, c, d, e;
	printf("���� 5���� �Է��Ͻÿ�: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	printf("�Է� ���� ���� %d\n", &a);
	printf("�Է� ���� ���� %d\n", &b);
	printf("�Է� ���� ���� %d\n", &c);
	printf("�Է� ���� ���� %d\n", &d);
	printf("�Է� ���� ���� %d\n", &e);

	printf("���� 5���� ����: ");
	scanf("%d+%d+%d+%d+%d = %d", &a, &b, &c, &d, &e);

}


void menu()
{
	printf("***************************************************\n");
	printf("*                ���� ���α׷�                   *\n");
	printf("---------------------------------------------------\n");
	printf("*                  ��� ��                         *\n");
	printf("*          ���� 2���� �����ȣ�� �Է��Ͻÿ�         *\n");
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

	printf("���� 2�� �Է�(�������� q): ");
	while (scanf("%d %d", &x, &y) == 2) {
		printf("�����ȣ: "); scanf_s(" %c", &op);
		if (op == '/' && y == 0) {
			printf("0���� ������ ����!\n");
			printf("���� 2�� �Է� (�������� q): ");
			continue;
		}
		if (op == '+' || op == '-' || op == '*' || op == '/')
			printf("%d %c %d = %d\n\n\n", x, op, y, caculator(x, op, y));
		else {
			printf("�ùٸ� �����ڸ� �Է��Ͻÿ� :\n");
			printf("���� 2�� �Է� (�������� q): ");
			continue;
		}
		menu();
		printf("���� 2�� �Է� (�������� q): ");
	}
	return 0;
}


int main()
{
	test02();
	return 0;
}
