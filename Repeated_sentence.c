#include<stdio.h>
#pragma warning (disable : 4996)

int main()//�ݺ���
{
	int cnt = 0, n;
	scanf("%d", &n);

	while (1)
	{
		printf("jungol\n");
		cnt++;

		if (cnt == n)
		{
			break;
		}
	}



	int x, y, min_num;

	printf("ù ��° ������ �Է��ϼ���: ");
	scanf("%d", &x);
	printf("�� ��° ������ �Է��ϼ���: ");
	scanf("%d", &y);

	if (x < y) 
	{
		min_num = x;
		x = y;
		y = min_num;
	}

	printf("%d���� %d���� ���ʴ�� ����մϴ�.\n", y, x);
	for (int i = y; i <= x; i++) 
	{
		printf("%d ", i);
	}



	int n, i, sum = 0;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		if (i % 5 == 0) {
			sum += i;
		}
	}
	printf("1���� %d������ 5�� ����� ���� %d�Դϴ�.", n, sum);

	int n, i;
	double sum = 0, num;
	printf("100 ������ �ڿ����� �Է��ϼ���: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		printf("%d��° ������ �Է��ϼ���: ", i);
		scanf("%lf", &num);
		sum += num;
	}
	double average = sum / n;
	printf("����� %.2f�Դϴ�.", average);



	return 0;
}