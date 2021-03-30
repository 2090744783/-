#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//char ch[20];//20个字符的数组
	//float arr[5];
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整形数字的数组
				 //0,1,2,3,4,5,6,7,8,9下标，从零开始
	//printf("%d\n",arr[4]);//下标的形式访问元素arr[元素]
	int i = 0;
	while (i < 10){
		printf("%d", arr[i]);
		i++;
	}
	return 0;
}