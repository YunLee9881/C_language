#include<stdio.h>
#pragma warning (disable : 4996)

int fibonacci(int num);
void binary(unsigned long n);
long recursive_fac(int n);
int get_Integer();
int max2(int x, int y);
int addNumber(int x, int y);

int main_()
{
	for (int i = 0; i < 13; ++i)
	{
		printf("%d\n", fibonacci(i));
	}

	int num = 4;
	scanf("%d", &num);
	printf("%d\n", recursive_fac(num));

	binary(num);

	int i = get_Integer();
	int j = get_Integer();
	addNumber(i, j);


	return 0;
}
int fibonacci(int num)//피보나치
{
	if (num > 2)
	{
		return fibonacci(num - 1) + fibonacci(num - 2);
	}
	else
	{
		return 1;
	}
}

void binary(unsigned long n)//2진수 변환
{

	int remainder = n % 2;
	if (n >= 2)
	{
		binary(n / 2);

	}
	printf("%d", remainder);

	return;

}
long recursive_fac(int n)
{
	if (n > 0)
	{
		return recursive_fac(n - 1);
	}
	else
	{
		return 1;
	}
}

int get_Integer()
{
	int num = 0;
	printf("정수를 입력하세요");
	scanf("%d", &num);
	return num;
}
int max2(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}

}

int addNumber(int x, int y)
{
	printf("%d + %d = %d", x, y, x + y);

}

