#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	char ch = 'w';
	char * pc = &ch;
	printf("%d\n",sizeof(pc));
	/**pc = 'a';
	printf("%c\n",ch);*/
	return 0;
}






//int main(){
//	int  a = 10;//�ĸ��ֽ�
//	//&ȡ��ַ��
//	int * P=&a;//��һ�ֱ���������ŵ�ַ��Ϊָ�����
//	//printf("%p\n",&a);
//	*P = 20;
//	printf("%d\n",a);
//	//*p�����ò�����
//	//printf("%p\n",P);
//	//printf("%p\n",&a);
//	return 0;
//}


//define MAX 100//�����ʶ������
//�����
//������ʵ��
//int Max(int x, int y){
	//if (x > y)
		//return x;
	//else
		//return y;
//}

//�궨�巽ʽ
//#define MAX(X,Y) (X>Y?X:Y)

//int main(){

	//int a = 10;
	//int b = 20;
	//int max = Max(a, b);
	//printf("%d\n",max);
	//�귽ʽ
	//max = MAX(a,b);


	//printf("%d\n", max);
	//int a = MAX;
	//return 0;
//}



//extern int Add(int , int );
//void test()
//{
	//static int  a = 1;//a��̬�ľֲ�����
	//a++;
	//printf("%d\n",a);
//}
//int main()

//{
	//auto int a = 10;//�ֲ����� - �Զ�����
	
	//register int a = 10;//a����ɼĴ�������
	
	//typedef ���Ͷ��� �����ض���
	//typedef unsigned int u_int;
	//unsigned int num = 20;
	//u_int num2 = 20;

	// static ���ξֲ��������ֲ��������������ӳ�
	//int i = 0;
	//while (i < 5)
	//{
		//test();
			//i++;
	
	//}
	//static ����ȫ�ֱ���,�ı�  ȫ�ֱ���  ������
	//extern  �����ⲿ����
	//extern int g_val;
	//printf("%d\n",g_val);
	//���κ������ı��˺�����������
	//int a = 10;
	//int b = 20;
	//int sum = Add(a, b);
	//printf("%d\n",sum);

	//���峣���ͺ�
//return 0;
//}