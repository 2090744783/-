#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Add(int* p)
{
	(*p)++;
}

int main()
{
	int num = 0;
	//���ú�����ʹ��ÿ����һ�Σ�num+1
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);
return 0;
}