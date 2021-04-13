#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//假设max中放入的是数组中的一个最大值，然后再用其他数去与max比较，max小则将大的数赋值给max继续比较，最后max中放的就是最大值
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int max = arr[0];//max为最大值
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