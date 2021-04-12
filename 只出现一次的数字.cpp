#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//定义一个数组，这个数组中的有一个元素出现一次，其余元素都出现2次，
	//定义一个a，用 a 异或 ^ 数组中的每一个元素，相同为0不同为1，最后数组中只剩下一个元素就是需要寻找的元素
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

	//双for循环遍历数组，i 每次只取数组中的一个元素，在用 j 取其他元素不停的与 i 比较，
	//如果两个元素相等，则n++，进行下一次比较，
	
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