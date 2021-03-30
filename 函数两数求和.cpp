#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int Add(int x, int y){
	//函数名 参数
	int z = x + y; 
	return z;//函数体
}//自定义函数
int main()
{
	int num1 = 10;
	int num2 = 20;
	int sum = 0;
	int a = 100;
	int b = 200;
	//scanf("%d %d",&num1,&num2);
	//sum = num1 + num2;
	sum = Add(num1, num2);
	sum = Add(a, b);
	sum = Add(2,3);
	//sum = a + b;
	
	printf("sum= %d\n",sum);


return 0;
}