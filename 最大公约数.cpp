#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	// 辗转相除法 i和j取模，余数为m，j和m取模，若余数为0，则j为i和j的最大公约数；若余数不为0，则将j的值赋给i，将m的值赋给j，再次取模，若余数为0，则j为最大公约数。
	int i = 0;
	int j = 0;
	scanf("%d %d", &i, &j);
	while (i%j){
		int m = i%j;
		i = j;
		j = m;
	}
	printf("%d\n", j);
return 0;
}