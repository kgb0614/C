
void menu() // 리턴값 필요없이 디스플레이만 필요할떄 void / 입력 매개 변수도 없음
{
	printf("************************************************");
	printf("*				계산기 프로그램				   *");
	printf("*----------------------------------------------*");
	printf("*	사용 예:									   *");
	printf("*	정수 2개와 연산기호(+, -, *, /)를 입력하시오.*");
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
