#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;//���ڴ��������ĸ��ֽڵĿռ�
//	//& a;
//	//printf("%p\n", &a);
//	int* p = &a;//p��һ�����������ַ����Ϊָ�����
//	//printf("%p\n", p);
//	*p= 20; //*-- �����ò�����/��ӷ��ʲ�����  ͨ�� p �ĵ�ַ�ҵ���ָ��Ķ���
//	printf("a = %d\n",a);
//return 0;
//}

//int main(){
//	double d = 3.14;
//	double* pd = &d;
//	printf("%d\n",sizeof(pd));//32 --4    64 -- 8
//	//*pd = 30;
//	//printf("%lf\n",d);
//	//printf("%lf\n", *pd);
//	return 0;
//}
int main(){

	printf("%d\n",sizeof(char*));
	printf("%d\n",sizeof(int*));
	printf("%d\n",sizeof(double*));
	printf("%d\n", sizeof(long*));
	return 0;
}

