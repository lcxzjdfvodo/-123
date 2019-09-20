#define _CRT_SECURE_NO_WARNINGS 1
/*#include <stdio.h>
int main()
{
	int n;
	printf("输入所求的斐波那契数的位置\n");
	scanf("%d", &n);
	int a = 1;
	int b = 1;
	int c = 0;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	printf("%d\n", c);
	return 0;
}*/
/*
#include<stdio.h>
	int fib(int n)
	{
		if (n <= 2){
			return 1;
		}
		else{
			return fib(n - 1) + fib(n - 2);
		}
	}
	int main(){
		int n;
		printf("输入要求的斐波那契数的位:\n");
		scanf("%d", &n);
		int ret = fib(n);
		printf("%d", ret);
	return 0;
}*/

#include<stdio.h>
int power(int n, int k)
{
	if (k == 0){
		return 0;
	}
	else if (k == 1){
		return n;
	}
	else{
		return n*power(n, k - 1);
	}
}
int main()
{
	int n = 4;
	int k = 3;
	printf("%d\n", power(n, k));
	return 0;
}