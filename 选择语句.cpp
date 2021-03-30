#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int input = 0;
	printf("找工作？？？\n");
	printf("你要好好学习吗？？(1/0)>:");
	scanf("%d",& input);
	if (input == 1)
		printf("haogongzuo");
	else
		printf("卖红薯");
return 0;
}