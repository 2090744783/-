#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int main()
{
		
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//打印闰年，先判断year是否为闰年，满足两个条件后，开始循环，打印出所有闰年
		//判断year是否为闰年
		//1、能被4整除并且不能被100整除
		//2、能被400整除
		
		if (year%4==0 && year%100 !=0)
		{
			printf("%d ",year);
			count++;
		}
		else if ( year% 400 == 0){
			printf("%d ", year);
			count++;
		}
	}
	printf("count = %d\n", count);
return 0;
}