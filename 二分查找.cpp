#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//查找有序数组中的一个数
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 7 };

	int  k = 0;//需要寻找的数组中的元素
	scanf("%d", &k);

	int sz = sizeof(arr) / sizeof(arr[0]);//数组长度
	int left = 0;//左下标
	int right = sz - 1;//右下标


	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid]>k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d", mid);
			break;
		}
		if (left > right)
			printf("找不到%d\n");
	}

return 0;
}