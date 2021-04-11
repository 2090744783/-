#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf("%d %d %d", &a, &b,&c);
	if (a < b)
	{
		d = a;
		a = b;
		b = d;
	}
	 if(c > a){
		d = a;
		a = c;
		c = d;
	}
	 if (b < c){
		d = b;
		b = c;
		c = d;
	}
	printf("%d %d %d", a, b,c);
return 0;
}