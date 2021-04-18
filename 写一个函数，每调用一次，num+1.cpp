#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Add(int* p)
{
	(*p)++;
}

int main()
{
	int num = 0;
	//调用函数，使得每调用一次，num+1
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);
return 0;
}