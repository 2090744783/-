#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//��д����1-100��9�ĸ���  ��λΪ9ʱ��ģ%10������Ϊ9   
	//ʮλΪ9ʱ����/10����Ϊ9
	//i % 10 == 9 || i / 10 == 9�ж����к�9������
	//i % 10 == 9 && i / 10 == 9�жϸ�λʮλ����9����������
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