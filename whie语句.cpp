#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	/*int ch = 0;
	while ((ch = getchar()) != EOF){
		putchar(ch);
	}
*///  getchar ��ȡһ���ַ�����  ch �У��жϷ���  ch �е��ַ��Ȳ����� EOF  ��=EOF ���������ַ�
 	
	int a = 0;
	char password[20] = { 0 };
	int ch = 0;
	printf("����������:");
	scanf("%s", password);//������������password������
	while ((ch = getchar()) != '\n'){
		;
	}
	printf("��ȷ��(Y/N):");
	a =  getchar();
	if (a == 'Y'){
		printf("ȷ�ϳɹ�:");
	}
		
	else{
		printf("ȷ��ʧ��:");
	}
		
	/*int line = 0;
	printf("�������\n");
	while (line < 20000)
	{
	printf("�ô���:%d\n",line);
		line++;
	}
	
	if (line >= 20000)
		printf("�ù���\n");*/

	//int ch = 0;
	//while ((ch = getchar()) !=EOF)
	//{
	//	if (ch <'0' || ch>'9') //'0'�ַ�0 == 48  '9'�ַ�9 == 57
	//		continue;
	//	putchar(ch);

	//}


	return 0;
} 
