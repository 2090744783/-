#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//�������������е�һ����
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 7 };

	int  k = 0;//��ҪѰ�ҵ������е�Ԫ��
	scanf("%d", &k);

	int sz = sizeof(arr) / sizeof(arr[0]);//���鳤��
	int left = 0;//���±�
	int right = sz - 1;//���±�


	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid]>k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d", mid);
			break;
		}
		if (left > right)
			printf("�Ҳ���%d\n");
	}

return 0;
}