#include<stdio.h>
#pragma warning (disable : 4996)

int main()//반복문
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

	printf("첫 번째 정수를 입력하세요: ");
	scanf("%d", &x);
	printf("두 번째 정수를 입력하세요: ");
	scanf("%d", &y);

	if (x < y) 
	{
		min_num = x;
		x = y;
		y = min_num;
	}

	printf("%d부터 %d까지 차례대로 출력합니다.\n", y, x);
	for (int i = y; i <= x; i++) 
	{
		printf("%d ", i);
	}



	int n, i, sum = 0;
	printf("정수를 입력하세요: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		if (i % 5 == 0) {
			sum += i;
		}
	}
	printf("1부터 %d까지의 5의 배수의 합은 %d입니다.", n, sum);

	int n, i;
	double sum = 0, num;
	printf("100 이하의 자연수를 입력하세요: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		printf("%d번째 정수를 입력하세요: ", i);
		scanf("%lf", &num);
		sum += num;
	}
	double average = sum / n;
	printf("평균은 %.2f입니다.", average);



	return 0;
}