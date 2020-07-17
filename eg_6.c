#include<stdio.h>
#include<stdlib.h>

struct mydata
{
	char id;
	struct mydata* pnext;
};
void main()
{
	char a;
	printf("输入字符串:");

	struct mydata* phead = NULL;
	struct mydata* pthis = NULL;
	while((a = getchar()) != '\n')
		{
		static int i = 0;
			if (i == 0)
			{
				phead = (struct mydata*)malloc(sizeof(struct mydata));
				phead->id = a;
				phead->pnext = NULL;
				pthis = phead;
			}
			else
			{
				pthis->pnext = (struct mydata*)malloc(sizeof(struct mydata));//这一行有错误警告
				pthis->pnext->id = a;
				pthis->pnext->pnext = NULL;
				pthis = pthis->pnext;
			}
			i++;
		}
		//输出
		pthis = phead;
		while (pthis)
		{
			printf("%c\n", pthis->id);
			pthis = pthis->pnext;
		}
	//释放
		while (phead)
		{
			pthis = phead;
			phead = phead->pnext;
			free(pthis);
		}
		pthis = NULL;
 }
