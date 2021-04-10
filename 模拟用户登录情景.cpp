#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", &password);
		if (strcmp(password, "123456s") == 0)
		{
			printf("登陆成功！");
			break;
		}
		else
		{
			printf("密码错误!");
		}
	}
	if (i == 3)
	{
		printf("三次输入错误，退出程序");
	}
return 0;
}