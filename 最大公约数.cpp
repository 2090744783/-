#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	// շת����� i��jȡģ������Ϊm��j��mȡģ��������Ϊ0����jΪi��j�����Լ������������Ϊ0����j��ֵ����i����m��ֵ����j���ٴ�ȡģ��������Ϊ0����jΪ���Լ����
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