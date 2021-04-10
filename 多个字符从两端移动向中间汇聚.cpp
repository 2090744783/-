#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	//eg:
	//welcome to  xian!
	//################！
	//w###############！
	//we##############！
	//;;;
	//welcome to  xian!
	
	char arr1[] = "welcome to xian!";
	char arr2[] = "################";
	int left = 0;
	
	/*int right = ((sizeof(arr1) / sizeof(arr1[0])) - 2);*/

	int right = strlen(arr1) - 1;
	while (left <= right)
	{

		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2); 
		Sleep(1000);//隔1秒打印
		system("cls");//执行系统命令的一个函数 - cls   清空屏幕
		left++;
		right--;
	}
	printf("%s\n", arr2);
return 0;
}