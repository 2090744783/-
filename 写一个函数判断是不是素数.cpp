#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int is_prime(int n)
{
	//是素数返回1，不是素数返回0
	
		int m = 0;
		for (m = 2; m < n; m++){


			if (n%m == 0)

				return 0;
		}
		return 1;
			
}


int main()
{

	
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		if (is_prime(i) == 1)
			printf("%d\n", i);
	}

return 0;
}