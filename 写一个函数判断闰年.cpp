#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int is_leap_year(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{

		if (is_leap_year(year) == 1)
		{

			printf("%d ", year);
		}
	}

return 0;
}