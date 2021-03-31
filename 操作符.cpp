#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//加，减，乘，除，取余，模
	//int a = 5 / 2;//除
	//int b = 5 %2;//取模
	//printf("%d\n",a);
	//printf("%d\n",b);

	//移位操作符
	// <<左移操作符 
	// >>右移操作符
	//int a = 1;
	//整形1占4个字节-32个bit位
	//000000000000000000000000000001
	//int b = a << 1;
	//int c = a >> 1;
	//printf("%d\n",b);
	//printf("%d\n",c);

	//（2进制）位操作
	// & 按位与
	// | 按位或
	// ^ 按位异或  对应的二进制为相同则为0，相异则为1 
	//int a = 3;//011
	//int b = 5;//101
	//int c = a&b;
	//int c = a | b;
	//int c = a ^ b;
	//printf("%d\n",c);

	//单独操作符
	//int a = 10;
	//a = 20;// = 赋值  == 判断相等
	//a = a + 10;
	//a +=10;
	//a = a - 20;
	//a - = 20;
	//a = a & 2;
	//a &= 2;
	//复合赋值符
	//+=  -=  *=  /=  %=  >>=  <<=  &=  |=  ^=

	//单目操作符 
	//int a = 10;
	//int b = 20;
	//a + b;// + 双目操作符
	//printf("%d\n",a);
	//printf("%d\n",!a);//  !a  将a反操作变为假  ！逻辑反操作符
	//int a = -2;
	//int b = +3;
	
	//sizeof变量或者类型所占空间大小单位是字节
	//int a = 10;
	//printf("%d\n",sizeof(a));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof  a );
	//int arr[10] = { 0 }; 
	//int sz = 0;
	//printf("%d\n",sizeof(arr));//计算数组长度
	//计算数组元素个数  个数 = 数组总大小 / 每个元素的大小
	//sz = sizeof(arr) / sizeof(arr[0]);
		//printf("sz = %d\n", sz);
	//int a = 0;
	//int b = ~a;// ~ 按位取反
	//printf("%d\n",b);
	//原码 符号位不变 其他位取反 为反码  反码 + 1 为补码

	//int a = 10;
	//int b = a++;//先使用 再++
	//int b = ++a;//先++，在使用

	//int b = a--;//先使用，再--
	//int b = --a;//先--，在使用
	//printf("%d\n%d\n",a,b);

	//强制类型转换
	//int a = (int)3.14;


	//关系操作符 > >= < <= != == 
	//0表示假  一切非0为真
	//&& --逻辑与  -- 一假则假
	// || -- 逻辑或  一真为真
	//int a = 0;
	//int b = 5;
	//int c  = a && b;
	//int c = a || b;
	//printf("%d\n",c);


	//条件操作符  exp1 ? exp2 :exp3;
	//表达式一为真，执行表达式二，表达式二的结果为整个表达式的结果
	//表达式一为假，则执行表达式三，表达式三的结果为整个表达式的结果
	//int a = 0;
	//int b = 0;
	//scanf("%d %d",&a,&b);
	//int max = 0;
	//max = ( a > b ? a : b);
	//if (a > b)
		//max = a;
	//else
		//max = b;
	//printf("%d\n",max);

	//下标
	//int arr[10] = { 0 };
	//arr[4];
	
	
	
	
	
	

return 0;
} 