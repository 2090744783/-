#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int binary_search(int arr[] , int m , int sz)//�����������arrΪһ��ָ��
{
	
	int left = 0;
	int right = sz - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if ( m  > mid)
		{
			left = mid + 1;
			right = sz - 1;
		}
		else if (m > mid)
		{
			left = 0;
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = {1,2,3,4,5,6};//ʵ�ʴ��ݹ�ȥ��������arr��Ԫ�ص�ַ
	//���鴫�κ󣬲��������ַ��������鳤��
	int sz = (sizeof(arr) / sizeof(arr[0]));
	int k = 0;
	scanf("%d", &k);
	int ret = binary_search(arr, k,sz);
	if (ret == -1)
	{
		printf("�Ҳ���%d\n");
	}
	else{
		printf("�ҵ���%d\n", ret);
	}
return 0;
}