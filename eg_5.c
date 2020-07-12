#include<stdio.h>

int main(void)
{
	//十进制转换二进制
	//int a,b,i,m,n;
	//int c[10];
	//i = 0;
	//n = 0;
	//scanf_s("%d", &a);
	////while (a > 0)
	////{
	////	b = a % 2;
	////	c[i] = b;
	////	a /= 2;
	////	i++;
	////	//printf("%d\n", b*10);
	////}
	////for (i = i - 1; i >= 0; i--)
	////	printf("%d", c[i]);
	////printf("\n--------------------------------------------\n");
	////十进制转换二进制
	//for (m = 1; a > 0; m *= 10)
	//{
	//	b = a % 2;
	//	a /= 2;
	//	b *= m;
	//	n += b;
	//	//printf("%d", n);
	//}
	//printf("%d", n);

	////++--的计算
	//int a = 1;
	////++操作是先赋值，再自增，赋值是给整个表达式赋值
	////printf("%d\n", (a++) + (++a) + (a++) + (++a));
	////printf("%d\n", (a++) + (++a) + (a++) + (a));
	////printf("%d\n", a++ ++ ++a + a++ + ++a);
	//printf("%d", a);

	////a++;    1
	////++a;    2
	////a++;    2
	////++a;    3

	////退格符换行符之类的也要计算长度
	//char a[] = "\ta\n%f";
	//printf("%d\n", strlen(a));
	//printf("%d", sizeof(a));
	//typedef union cc
	//{
	//	long b[2];
	//	int a[4];
	//}bb;
	//bb aa;
	//union dd
	//{
	//	char a;
	//};
	//printf("%d\n", sizeof(bb));
	//printf("%d\n", sizeof(aa));
	//printf("%d\n", sizeof(union cc));
	//printf("%d\n", sizeof(union dd));


	///*struct abc
	//{

	//	int a,b,c;
	//}bb;
	//struct abcd
	//{
	//	int a;
	//	int b;
	//	int c;
	//	long int d;
	//}bbb;

	//printf("%d\n", sizeof(bb));
	//printf("%d\n", sizeof(struct abc));
	//printf("%d\n", sizeof(bbb));
	//printf("%d\n", sizeof(struct abcd));
	//printf("dkdjsgkdsfgkfdg");*/

	//链表
	struct aa
	{
		int a;
		struct aa* bb;
	};
	//尾部插入
	struct aa* head = NULL;
	struct aa* foot = NULL;
	for (int i = 0; i < 10; i++)
	{
		if (i == 0)
		{
			head = (struct aa*)malloc(sizeof(struct aa));
			head->a = i+1;
			head->bb = NULL;
			foot = head;
		}
	}
	return 0;
}
