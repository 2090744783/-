#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ṹ��
struct book {
		char name[20];
		short price;
	
	};

int main()
{	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct book b1 = {"�����γ�ѧ���",55,};

	struct book* pd = &b1;

	printf("%s\n",pd->name);
	printf("%d\n",pd->price);
	/*printf("%s\n",(*pd).name);
	printf("%d\n", (*pd).price);*/


	/*printf("������%s\n", b1.name);
	printf("�۸�%d\n", b1.price);
	b1.price = 155;
	printf("�޸ĺ�%d\n",b1.price);*/
return 0;
}
// .  �ṹ�����  .��Ա
// -> �ṹ��ָ��  ->��Ա