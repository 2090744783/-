#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	/*int ch = 0;
	while ((ch = getchar()) != EOF){
		putchar(ch);
	}
*///  getchar 获取一个字符放入  ch 中，判断放入  ch 中的字符等不等于 EOF  ！=EOF 则输出这个字符
 	
	int a = 0;
	char password[20] = { 0 };
	int ch = 0;
	printf("请输入密码:");
	scanf("%s", password);//输入密码存放在password数组中
	while ((ch = getchar()) != '\n'){
		;
	}
	printf("请确认(Y/N):");
	a =  getchar();
	if (a == 'Y'){
		printf("确认成功:");
	}
		
	else{
		printf("确认失败:");
	}
		
	/*int line = 0;
	printf("加入比特\n");
	while (line < 20000)
	{
	printf("敲代码:%d\n",line);
		line++;
	}
	
	if (line >= 20000)
		printf("好工作\n");*/

	//int ch = 0;
	//while ((ch = getchar()) !=EOF)
	//{
	//	if (ch <'0' || ch>'9') //'0'字符0 == 48  '9'字符9 == 57
	//		continue;
	//	putchar(ch);

	//}


	return 0;
} 
