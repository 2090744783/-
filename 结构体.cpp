#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//结构体
struct book {
		char name[20];
		short price;
	
	};

int main()
{	//利用结构体类型创建一个该类型的结构体变量
	struct book b1 = {"参与盐城学设计",55,};

	struct book* pd = &b1;

	printf("%s\n",pd->name);
	printf("%d\n",pd->price);
	/*printf("%s\n",(*pd).name);
	printf("%d\n", (*pd).price);*/


	/*printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	b1.price = 155;
	printf("修改后：%d\n",b1.price);*/
return 0;
}
// .  结构体变量  .成员
// -> 结构体指针  ->成员