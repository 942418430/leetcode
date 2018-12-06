#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int reverse(int x) {
	long y = 0;
	while (x)
	{
		y = y * 10 + (x % 10);
		x /= 10;
	}
	if (y < (-pow(2, 31)) || y > pow(2, 31) - 1)
		return 0;
	else
		return y;
}

int main()
{
	int x = 0;
	printf("请输入一个数\n");
	scanf("%d", &x);
	printf("%d\n", reverse(x));
	system("pause");
	return 0;
}