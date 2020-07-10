#include<stdio.h>
#include<math.h>

int main(void)
{
	int num;
	printf("输入行数：");
	scanf_s("%d", &num);

	//输出正方形
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
	printf("------------------------------\n");
	//空心正方形
	for (int i = 0; i < num; i++)
	{
		//printf("%d", num << 1);
		for (int j = 1; j < (num << 1); j++)
		{
			if ((i == 0 || i == num - 1) && j % 2 != 0 || j == 1 || j == 2 * num - 1)
				printf("2");
			else
				printf("8");
		}
		printf("\n");
	}
	printf("------------------------------\n");

	//空心正方形
	for (int i = 0; i < num; i++)
	{
		//printf("%d", num << 1);
		for (int j = 0; j < (num << 1) - 1; j++)
		{
			if ((i == 0 || i == num - 1) && j % 2 == 0 || j == 0 || j == 2 * num - 2)
				printf("2");
			else
				printf("8");
		}
		printf("\n");
	}
	printf("------------------------------\n");
	//输出菱形（没有找到规律一个个试出来的式子，而且num只是上半部的行数
	for (int i = 0; i < num; i++)
	{
		for (int j = num - i; j > 0; j--)
		{
			printf(" ");
		}
		for (int j = 0; j <= 2 * i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = i + 2; j > 0; j--)
		{
			printf(" ");
		}
		for (int j = 2 * (num - i - 1) - 2; j >= 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("------------------------------\n");
	//空心输出菱形
	for (int i = 0; i < num; i++)
	{
		for (int j = num-i; j > 0; j--)
		{
			printf(" ");
		}
		for (int j = 0; j <=2*i; j++)
		{
			if(j==0||j==2*i)
			printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	for (int i = 0; i < num-1; i++)
	{
		for (int j =i+2; j > 0; j--)
		{
			printf(" ");
		}
		for (int j = 2*(num-i-1)-2; j >=0; j--)
		{
			if (j == 2 * (num - i - 1) - 2 || j == 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	printf("------------------------------\n");
	//abs输出菱形
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < abs(num / 2 - i); j++)
		{
			printf(" ");
		}
		for (int j = 0; j < num - 2 * abs(num / 2 - i); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("------------------------------\n");
	//输出空心菱形
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < abs(num / 2 - i); j++)
		{
			printf(" ");
		}
		for (int j = 0; j < num - 2 * abs(num / 2 - i); j++)
		{
			if (j != 0 && j != num - 2 * abs(num / 2 - i) - 1)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	printf("------------------------------\n");
	//输出菱形(里面什么都没改只是把i的初始值和最后的值换了一个位置
	for (int i = 0; i < num / 2; i++)
	{
		for (int j = 0; j < (num / 2 - i); j++)
		{
			printf(" ");
		}
		for (int j = 2 * i + 1; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = num / 2; i >= 0; i--)
	{
		for (int j = 0; j < (num / 2 - i); j++)
		{
			printf(" ");
		}
		for (int j = 2 * i + 1; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("------------------------------\n");
	//输出菱形(里面什么都没改只是把i的初始值和最后的值换了一个位置,应该类似于绝对值)
	for (int i = 0; i < num / 2; i++)
	{
		for (int j = 0; j < (num / 2 - i); j++)
		{
			printf(" ");
		}
		for (int j = 2 * i + 1; j > 0; j--)
		{
			if (j == 1 || j == 2 * i + 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	for (int i = num / 2; i >= 0; i--)
	{
		for (int j = 0; j < (num / 2 - i); j++)
		{
			printf(" ");
		}
		for (int j = 2 * i + 1; j > 0; j--)
		{
			if (j == 1 || j == 2 * i + 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	printf("------------------------------\n");
	//平行四边形
	for (int i = 0; i < num/2+1; i++)
	{
		for (int j = i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < num/2; i++)
	{
		for (int j = i; j > 0; j--)
		{
			printf(" ");
		}
		for (int j = i; j < num/2; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("------------------------------\n");
	//平行四边形正
	for (int i = 0; i < num; i++)
	{
		for (int j = num-i-1; j > 0; j--)
		{
			printf(" ");
		}
		for (int j = 0; j < num; j++)
		{
			if(i==0||j==0||i==num-1||j==num-1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	printf("------------------------------\n");
	//空心平行四边形
	for (int i = 0; i < num / 2 + 1; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (i == j||j==1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	for (int i = 0; i < num / 2; i++)
	{
		for (int j = i; j > 0; j--)
		{
			printf(" ");
		}
		for (int j = i; j < num / 2; j++)
		{
			if (i == j || j == num/2 - 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	printf("------------------------------\n");
	//加边框空心菱形(实际上是把一行分为三个部分：空格，符号，空格）
	for (int i = 0; i < num / 2; i++)
	{
		for (int j = 0; j < (num / 2 - i); j++)
		{
			if (i == 0||j==0)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		for (int j = 2 * i + 1; j > 0; j--)
		{
			if (j == 1 || j == 2 * i + 1)
				printf("*");
			else
				printf(" ");
		}
		for (int j = 0; j < (num / 2 - i); j++)
		{
			if (i == 0 || j == num / 2 - i - 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	for (int i = num / 2; i >= 0; i--)
	{
		for (int j = 0; j < (num / 2 - i); j++)
		{
			if (i == num/2||i==0 || j == 0)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		for (int j = 2 * i + 1; j > 0; j--)
		{
			if (j == 1 || j == 2 * i + 1)
				printf("*");
			else
				printf(" ");
		}
		for (int j = 0; j < (num / 2 - i); j++)
		{
			if (i == num / 2||i==0 || j == num / 2 - i - 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	//love竖着的
	for (int i = 0; i < num; i++)
	{
		printf("*");
		printf("\n");
		if (i == num - 1)
		{
			for (int j = 0; j < num; j++)
			{
				printf("*");
			}
		}
	}
	printf("\n");
	for (int i = 0; i < num; i++)
	{
		//printf("%d", num << 1);
		for (int j = 1; j < (num << 1); j++)
		{
			if ((i == 0 || i == num - 1) && j % 2 != 0 || j == 1 || j == 2 * num - 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < num; i++)
	{
		for (int j = i; j > 0; j--)
		{
			printf(" ");
		}
		for (int j = 2 * (num - i) - 2; j >= 0; j--)
		{
			if (j == 2 * (num - i) - 2 || j == 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	for (int i = 0; i < num; i++)
	{
		//printf("%d", num << 1);
		for (int j = 1; j < (num << 1); j++)
		{
			if ((i == num - 1) && j % 2 != 0 || j == 1 || j == 2 * num - 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	printf("------------------------------\n");

	////love横着的
	//for (int i = 0; i < num; i++)
	//{
	//	for(int j=0;j<4*num;j++)
	//		if (i == 0 || j || j == 0)
	//		{
	//			printf("*");
	//		}
	//要想格子太复杂了，有空再想
	//}
	return 0;
}
