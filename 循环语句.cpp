#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int line = 0;
	printf("�������\n");
	while (line < 20000)
	{
	printf("�ô���:%d\n",line);
		line++;
	}
	
	if (line >= 20000)
		printf("�ù���\n");

	return 0;
} 