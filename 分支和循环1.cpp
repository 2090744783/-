#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	//switch多分枝
	int day = 0;
	scanf("%d",&day);
	switch (day)
	{
	case 1: 
		printf("星期一\n");
		break;
	case 2:
		printf("星期2\n");
		break;
	case 3:
		printf("星期3\n");
		break;
	case 4:
		printf("星期4\n");
		break;
	case 5:
		printf("星期5\n");
		break;
	case 6:
		printf("星期6\n");
		break;
	case 7:
		printf("星期tian\n");
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
//	//如果条件成立，要执行多个条件，应该使用代码块
//	int age = 10;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//
//	}
//	else {
//		if (age >= 18 && age < 28)
//			printf("青年\n");
//		else if (age >= 28 && age < 58)
//			printf("壮年\n");
//		else if (age >= 50 && age < 90)
//			printf("老年\n");
//		else
//			printf("老不死\n");
//	}
//
//
//	return 0;
//}
//int main()
//{
//	//分支语句  if  switch
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age>=18  &&  age<28)
//		printf("青年\n");
//	else if (age >= 28 && age < 58)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//	/*scanf("%d",&age);
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");*/
//
//
//return 0;
//}