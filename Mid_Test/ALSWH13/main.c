#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5
#include "test01.h"

int test05()
{
	int input[20] = { 0 };
	printf("�迭�� ������ ������ ������ �Է��Ͻÿ�: \n");
	printf("0���Է��ϸ� ����˴ϴ�.\n");
	int i = 0;
	do {
		scanf_s("%d", &input[i]);
	} while (input[i++] != 0);
	i = 0;
	while (input[i] != 0) {
		printf("%d", input[i++]);
	}
	puts("");
	return 0;
}

int test04()
{
	int score[] = { 1, 2, 3, 4, 5, 6 };
	double sum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		sum += score[i];

		printf("")
	}


	printf("")


}

int test03()
{
	int score[SIZE];
	score[0] = 78;
	score[1] = 97;
	score[2] = 85;
	score[4] = 91;
	score[5] = 50;
	for (int i = 0; i < SIZE; i++)
		printf("%d  ", score[i]);
	printf("\n");
	return 0;
}

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
	printf("*-------------------------------------------------*\n");
	printf("*                  ��� ��                        *\n");
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
			printf("%d %c %d = %d\n\n\n", x, op, y, calcuator(x, op, y));
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
	test05();
	return 0;
}
