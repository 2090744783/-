#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	//switch���֦
	int day = 0;
	scanf("%d",&day);
	switch (day)
	{
	case 1: 
		printf("����һ\n");
		break;
	case 2:
		printf("����2\n");
		break;
	case 3:
		printf("����3\n");
		break;
	case 4:
		printf("����4\n");
		break;
	case 5:
		printf("����5\n");
		break;
	case 6:
		printf("����6\n");
		break;
	case 7:
		printf("����tian\n");
		break;
	}
	
	
	return 0;
}
//int main(){
//	int n = 0;
//	while (n<=100)
//	{
//		if (n % 2 == 1)
//			printf("%d\n", n);
//			n++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//			printf("haha\n");
//	return 0;
//}
//int main(){
//	//�������������Ҫִ�ж��������Ӧ��ʹ�ô����
//	int age = 10;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//
//	}
//	else {
//		if (age >= 18 && age < 28)
//			printf("����\n");
//		else if (age >= 28 && age < 58)
//			printf("׳��\n");
//		else if (age >= 50 && age < 90)
//			printf("����\n");
//		else
//			printf("�ϲ���\n");
//	}
//
//
//	return 0;
//}
//int main()
//{
//	//��֧���  if  switch
//	int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age>=18  &&  age<28)
//		printf("����\n");
//	else if (age >= 28 && age < 58)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//	/*scanf("%d",&age);
//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");*/
//
//
//return 0;
//}