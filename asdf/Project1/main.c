#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "test1.h"


int test1()
{
	int x, y; char op; //���������� ��������

	menu();
	printf("���� 2�� �Է�(�������� q): ");
	while (scanf("%d %d", &x, &y) == 2)
	{
		printf("�����ȣ: "); scanf(" %c", &op);
		if (op == '/' && y == 0) // && = and
		{
			printf("0���� ������ ����!\n");
			printf("���� 2�� �Է�(�������� q): ");
			continue; // ���� �ڵ带 ���������ʰ� �ٽ� while�� ���ư�
		}
		if (op == '+' || op == '-' || op == '*' || op == '/') // || = or 
			printf("%d %c %d = %d\n\n\n", x, op, y, calculator(x, op, y));
		else
		{
			printf("�ùٸ� �����ڸ� �Է��Ͻÿ�: ");
			printf("���� 2�� �Է�(�������� q): ");
			continue;
		}
		menu();
		printf("���� 2�� �Է�(�������� q): ");
	}


	return 0;
}


int main()
{
	int test1();
	return 0;
}
