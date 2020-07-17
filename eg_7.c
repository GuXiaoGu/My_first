#include<stdio.h>

struct mydata
{
	int n, y, r;
};

//计算天
int nn(int a, int c)
{
	int b;
	switch (a)
	{
	case 1:b = 31; break;
	case 2:
	{
		if (c == 0)
		{
			b = 28;
		}
		else
		{
			c = 29;
		}break;
	}
	case 3:b = 31; break;
	case 4:b = 30; break;
	case 5:b = 31; break;
	case 6:b = 30; break;
	case 7:b = 31; break;
	case 8:b = 31; break;
	case 9:b = 30; break;
	case 10:b = 31; break;
	case 11:b = 30; break;
	case 12:b = 31; break;
	default: b = 0;
	}
	if (a == 0)
		return b = 0;
	else
	b += nn(a-1,c);
	return b;
}
int main()
{
	/*
	//大小写
	char a;
	int b = 0;
	while ((a = getchar())!='\n')
	{
		if (a >= 'a' && a <= 'z')
			printf("%c", a - 32);
		else
			printf("%c", a);
	}
	printf("\n");*/

	//年月日
	struct mydata d;//输入日期
	int da;
	printf("请输入年月日：");
	scanf_s("%d.%d.%d", &d.n, &d.y, &d.r);
	int b = 0;
	if (d.n % 4 == 0)
	{
		//二月28天
		printf("%d", nn(d.y-1,b)+d.r);
	}
	else
	{
		//二月29天
		b = 1;
		printf("%d", nn(d.y-1, b) + d.r);
	}
	return 0;
}
