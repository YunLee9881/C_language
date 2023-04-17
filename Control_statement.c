#include <stdio.h>
#pragma warning(disable : 4996)
int main_()//제어문
{
	int year;
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("윤년이다");
	}
	else 
	{
		printf("윤년이 아니다");
	}

	return 0;
}
