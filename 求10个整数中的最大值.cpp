#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//����max�з�����������е�һ�����ֵ��Ȼ������������ȥ��max�Ƚϣ�maxС�򽫴������ֵ��max�����Ƚϣ����max�зŵľ������ֵ
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int max = arr[0];//maxΪ���ֵ
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}