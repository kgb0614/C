
void menu() // ���ϰ� �ʿ���� ���÷��̸� �ʿ��ҋ� void / �Է� �Ű� ������ ����
{
	printf("************************************************");
	printf("*				���� ���α׷�				   *");
	printf("*----------------------------------------------*");
	printf("*	��� ��:									   *");
	printf("*	���� 2���� �����ȣ(+, -, *, /)�� �Է��Ͻÿ�.*");
	printf("************************************************");
}

int calculator(int x, char op, int y)
{
	switch (op)
	{
	case '+': return add(x, y); break;
	case '-': return sub(x, y); break;
	case '*': return mul(x, y); break;
	case '/': return div(x, y); break;
	}
	return 0;
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
