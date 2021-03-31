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
//	int  a = 10;//四个字节
//	//&取地址符
//	int * P=&a;//有一种变量用来存放地址称为指针变量
//	//printf("%p\n",&a);
//	*P = 20;
//	printf("%d\n",a);
//	//*p解引用操作符
//	//printf("%p\n",P);
//	//printf("%p\n",&a);
//	return 0;
//}


//define MAX 100//定义标识符常量
//定义宏
//函数的实现
//int Max(int x, int y){
	//if (x > y)
		//return x;
	//else
		//return y;
//}

//宏定义方式
//#define MAX(X,Y) (X>Y?X:Y)

//int main(){

	//int a = 10;
	//int b = 20;
	//int max = Max(a, b);
	//printf("%d\n",max);
	//宏方式
	//max = MAX(a,b);


	//printf("%d\n", max);
	//int a = MAX;
	//return 0;
//}



//extern int Add(int , int );
//void test()
//{
	//static int  a = 1;//a静态的局部变量
	//a++;
	//printf("%d\n",a);
//}
//int main()

//{
	//auto int a = 10;//局部变量 - 自动变量
	
	//register int a = 10;//a定义成寄存器变量
	
	//typedef 类型定义 类型重定义
	//typedef unsigned int u_int;
	//unsigned int num = 20;
	//u_int num2 = 20;

	// static 修饰局部变量，局部变量生命周期延长
	//int i = 0;
	//while (i < 5)
	//{
		//test();
			//i++;
	
	//}
	//static 修饰全局变量,改变  全局变量  作用域
	//extern  声明外部符号
	//extern int g_val;
	//printf("%d\n",g_val);
	//修饰函数，改变了函数链接属性
	//int a = 10;
	//int b = 20;
	//int sum = Add(a, b);
	//printf("%d\n",sum);

	//定义常量和宏
//return 0;
//}