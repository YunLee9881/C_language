#include <stdio.h>
#pragma warning (disable : 4996)
int gcd(int a, int b);
int lcm(int a, int b);

int main() //�ּҰ����
{
    int num1, num2;
    printf("�� ���� �Է��ϼ���: ");
    scanf("%d %d", &num1, &num2);
    printf("%d�� %d�� �ּҰ������ %d�Դϴ�.", num1, num2, lcm(num1, num2));
    return 0;
}

int gcd(int a, int b) 
{
    int temp;
    while (b != 0) 
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
