#include <stdio.h>
#pragma warning(disable : 4996)
int gcd(int a, int b) //최대공약수
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

    printf("두 개의 정수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    result = gcd(num1, num2);

    printf("두 수의 최대공약수는 %d입니다.", result);

    return 0;
}
