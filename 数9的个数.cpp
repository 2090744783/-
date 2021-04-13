#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//编写代码1-100中9的个数  个位为9时，模%10，余数为9   
	//十位为9时，除/10，商为9
	//i % 10 == 9 || i / 10 == 9判断所有含9的数字
	//i % 10 == 9 && i / 10 == 9判断个位十位都是9的特殊数字
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9 || i / 10 == 9){
			printf("%d\n", i);
			count++;
		}
		 if (i % 10 == 9 && i / 10 == 9){
			count++;
		}
	}
	printf("count = %d\n", count);
return 0;
}