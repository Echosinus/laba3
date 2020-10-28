//очередь
#include "queue.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//инициализация очереди
void init_que(struct queue* q)
{
	q->quefirst = 1;
	q->quelast = 0;
	return;
}

//вставка в очередь элемента
int push(struct queue* q, char x,int n)
{
	if (q->quelast <= n)
	{
		q->quelast++;
		q->que[q->quelast] = x;
		return 0;
	}
	else
	return 1;
}

//проверка очереди
int is_empty(struct queue* q)
{
	if (q->quelast < q->quefirst)
		return 1;
	else  
		return 0;
}

//вывод элементов
int print(struct queue* q)
{
	int h;
	if (is_empty(q) == 1)
		return 1;
	for (h = q->quefirst; h <= q->quelast; h++)
		printf("%c ", q->que[h]);
	return 0;
}

//удаление элементов
int pop(struct queue* q, char x)
{
	if (is_empty(q) == 1)
	{
		return 1;
	}
	else
	{
	x = q->que[q->quefirst];
	q->quefirst++;
	}
	return 0;
}

//проверяет на пробелы и энтеры и вводит символы в массив очереди
char check(struct queue* q, char b)
{
	int flag = 0, j = 0, n = 1;
	printf("enetry size queue\n");
	if ((!scanf("%d", &n)) || n < 0)
		return 1;
	else
	{
		{
			printf("enetry elements queue\n");
			while (j < n)
			{
				scanf("%c", &b);
				if (b == ' ' || b == '\n')
					flag = 1;
				if (flag == 0)
				{
					push(q, b, n);
					j++;
				}
				flag = 0;
			}
			return 0;
		}
	}
}
