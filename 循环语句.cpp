#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int line = 0;
	printf("加入比特\n");
	while (line < 20000)
	{
	printf("敲代码:%d\n",line);
		line++;
	}
	
	if (line >= 20000)
		printf("好工作\n");

	return 0;
} 