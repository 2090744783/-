#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int Add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum=Add(a, b);
//	printf("%d\n", sum);
//
//return 0;
//}

#include<string.h>
//int main()
//{
//	// strlen  --  string length 求字符串长度的函数
//	// strcpy  --  string copy  拷贝函数，将arr1中的元素拷贝后放入arr2中
//	char arr1[] = "bit    ";
//	char arr2[] = "#######";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	//memset
//	//memory - 内存   set  -设置  将字符串的某一段长度设置为给定的值
//	char arr[] = "Hellow，word！";
//	memset(arr, '*', 6);
//	printf("%s\n", arr);
//
//	return 0;
//}
//函数的组成
//  ret_type fun_name(paral,*)
//  { 
//	statement;语句项
//  }
//  ret_type 返回类型
//  fun_name 函数名
//  paral    函数参数


//写一个函数找出两个整数中的较大值
//int get_Max(int x, int y){
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int Max=get_Max(a, b);
//	printf("%d\n", Max);
//	return 0;
//}

//写一个函数交换两个整形变量的内容
void Swap(int* x, int *y){
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main(){
	int a = 10;
	int b = 20;
	scanf("%d %d", &a, &b);
	Swap(&a, &b);
	printf("%d %d\n", a, b);
	return 0;


}
