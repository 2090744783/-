#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//������� 1/1+1/2-1/3+,,,+1/100 ���帡���ͱ�����������forѭ����ӡ��1-100���֣� 1.0 / i �������з���֮��
	//����sum�У�����flag = 1��flag = -flag ��ѭ����ʼ��flag�����󸺣�ʵ�ּӼ���
	float i = 0.0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++){
		 sum += (flag*1.0 / i);
		 flag = -flag;
	}

	printf("%lf\n", sum);
return 0;
}

