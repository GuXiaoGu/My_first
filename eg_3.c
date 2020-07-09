#include<stdio.h>

int main(void)
{
	int a[9];
	int length = 9;
	for (int i = 0; i < 9; i++)
	{
		a[i] = i + 1;
	}

	for (int i = 0, j=8; i < 9 / 2; i++,j--)
	{
		int c = a[i];//辅助空间
		a[i] = a[j];
		a[j] = c;
	}

	for (int i = 0; i < (length >> 1); i++)
	{
		int c = a[i];//辅助空间
		a[i] = a[length - 1 - i];
		a[length - 1 - i] = c;
	}

	for (int i = 0; i < (length >> 1); i++)
	{
		a[i] = a[length - 1 - i] + a[i];
		a[length - 1 - i] = a[i] - a[length - 1 - i];
		a[i] = a[i] - a[length - 1 - i];
	}

	for (int i = 0; i < (length >> 1); i++)
	{
		a[i] = a[length - 1 - i] ^ a[i];
		a[length - 1 - i] = a[i] ^ a[length - 1 - i];
		a[i] = a[i] ^ a[length - 1 - i];
	}
	for (int i = 0; i < length; i++)
	{
		printf("%d", a[i]);
	}
	printf("%d", sizeof(a)/sizeof(a[0]));
}
