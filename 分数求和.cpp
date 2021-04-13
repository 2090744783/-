#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//分数求和 1/1+1/2-1/3+,,,+1/100 定义浮点型变量，先利用for循环打印出1-100数字， 1.0 / i 就是所有分数之和
	//放入sum中，定义flag = 1，flag = -flag ，循环开始后，flag先正后负，实现加减法
	float i = 0.0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++){
		 sum += (flag*1.0 / i);
		 flag = -flag;
	}

	printf("%lf\n", sum);
return 0;
}

