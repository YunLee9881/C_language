#include <stdio.h>
#pragma warning(disable : 4996)
int main_()//���
{
	int year;
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("�����̴�");
	}
	else 
	{
		printf("������ �ƴϴ�");
	}

	return 0;
}
