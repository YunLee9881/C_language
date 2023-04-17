#include <stdio.h>
#pragma warning (disable : 4996)
int gcd(int a, int b);
int lcm(int a, int b);

int main() //최소공배수
{
    int num1, num2;
    printf("두 수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);
    printf("%d와 %d의 최소공배수는 %d입니다.", num1, num2, lcm(num1, num2));
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
