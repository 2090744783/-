#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//����һ�����飬��������е���һ��Ԫ�س���һ�Σ�����Ԫ�ض�����2�Σ�
	//����һ��a���� a ��� ^ �����е�ÿһ��Ԫ�أ���ͬΪ0��ͬΪ1�����������ֻʣ��һ��Ԫ�ؾ�����ҪѰ�ҵ�Ԫ��
	/*int arr[20] = {};
	scanf("%d", &arr);
	int a = 0;
	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
	{
		a = a^arr[i];
	}
	printf("%d\n", a);*/

	/*int arr[] = {1,2,2};
	int sz = sizeof(arr) / sizeof(arr[0]);
		for (int i = 0; i<sz; i++){
			int count = 0;
			for (int j = 0; j<sz; j++){
				if (arr[i] == arr[j]){
					count++;
				}
			}
			if (count == 1){
				printf("%d\n", n);
			}
		}*/

	//˫forѭ���������飬i ÿ��ֻȡ�����е�һ��Ԫ�أ����� j ȡ����Ԫ�ز�ͣ���� i �Ƚϣ�
	//�������Ԫ����ȣ���n++��������һ�αȽϣ�
	
	int arr[] = { 1, 2, 2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	for (int i = 0; i < sz; i++)
	{
		int n = 0;
		for (int j = 0; j < sz; j++)
		{
			if (arr[j] == arr[i])
			{
				n++;
				 
			}
			
		}
		if (n == 1){
			printf("%d\n", n);
		}
	}
	return 0;
}