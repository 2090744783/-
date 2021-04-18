#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int binary_search(int arr[] , int m , int sz)//本质上这里的arr为一个指针
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
	int arr[] = {1,2,3,4,5,6};//实际传递过去的是数组arr首元素地址
	//数组传参后，不能用这种方法求数组长度
	int sz = (sizeof(arr) / sizeof(arr[0]));
	int k = 0;
	scanf("%d", &k);
	int ret = binary_search(arr, k,sz);
	if (ret == -1)
	{
		printf("找不到%d\n");
	}
	else{
		printf("找到了%d\n", ret);
	}
return 0;
}