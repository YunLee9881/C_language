#include <stdio.h>
#pragma warning(disable : 4996)
int gcd(int a, int b) //�ִ�����
{
    if (b == 0) 
    {
        return a;
    }
    else 
    {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2, result;

    printf("�� ���� ������ �Է��ϼ���: ");
    scanf("%d %d", &num1, &num2);

    result = gcd(num1, num2);

    printf("�� ���� �ִ������� %d�Դϴ�.", result);

    return 0;
}
