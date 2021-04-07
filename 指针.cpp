#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;//向内存申请了四个字节的空间
//	//& a;
//	//printf("%p\n", &a);
//	int* p = &a;//p是一个变量，存地址，称为指针变量
//	//printf("%p\n", p);
//	*p= 20; //*-- 解引用操作符/间接访问操作符  通过 p 的地址找到所指向的对象
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

