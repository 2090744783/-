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
//	// strlen  --  string length ���ַ������ȵĺ���
//	// strcpy  --  string copy  ������������arr1�е�Ԫ�ؿ��������arr2��
//	char arr1[] = "bit    ";
//	char arr2[] = "#######";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	//memset
//	//memory - �ڴ�   set  -����  ���ַ�����ĳһ�γ�������Ϊ������ֵ
//	char arr[] = "Hellow��word��";
//	memset(arr, '*', 6);
//	printf("%s\n", arr);
//
//	return 0;
//}
//���������
//  ret_type fun_name(paral,*)
//  { 
//	statement;�����
//  }
//  ret_type ��������
//  fun_name ������
//  paral    ��������


//дһ�������ҳ����������еĽϴ�ֵ
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

//дһ�����������������α���������
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
