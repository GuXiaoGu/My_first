#include<stdio.h>

int main(void)
{
	int arr[9];
	int length = 9;
	//int i，j;
	//赋值
	for (int i = 0; i < length; i++)
	{
		arr[i] = i+1;
	}
	//遍历输出(查）
	for (int i = 0; i < length; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("************************\n");

	//替换（改）
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == 5)
		{
			arr[i] = 9;
		}
	}
	for (int i = 0; i < length; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("************************\n");

	//删除中间某个数
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == 4)
		{
			for (int j = i; j < length; j++)
			{
				arr[j] = arr[j + 1];
			}
		}
	}
	length--;//减少数组输出的长度
	for (int i = 0; i < length; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("************************\n");

	//中间增加内容
	int a = 0;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] > a)
		{
			for (int j = length - 1; j >= i; j--)//12356
			{
				//arr[j] = arr[j + 1];
				arr[j + 1] = arr[j];
			}
			arr[i] = a;
			break;
		}
		//break;
	}
	length--;//增加数组输出的长度
	for (int i = 0; i < length; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("************************\n");


	return 0;
}