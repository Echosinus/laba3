//очередь
#include "queue.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void init_que(struct queue* q) //инициализация очереди
{
	q->quefirst = 1;
	q->quelast = 0;
	return 0;
}
int push(struct queue* q, char x) //вставка в очередь элемента
{
	if (q->quelast <= N)
	{
		q->quelast++;
		q->que[q->quelast] = x;
		return 0;
	}
	else
		return 1;
}
int is_empty(struct queue* q) //проверка очереди
{
	if (q->quelast < q->quefirst)
		return 1;
	else  
		return 0;
}
int print(struct queue* q) //вывод элементов
{
	int h;
	if (is_empty(q) == 1)
	{
		return 1;
	}
	for (h = q->quefirst; h <= q->quelast; h++)
		printf("%c ", q->que[h]);
	return 0;
}
int pop(struct queue* q,char x)//удаление элементов
{
	if (is_empty(q) == 1)
	{
		return 1;
	}
	x = q->que[q->quefirst];
	q->quefirst++;
	return 0;
}
char check(struct queue* q, char b)//проверяет на пробелы и энтеры и вводит символы в массив очереди
{
	int flag1 = 0, flag2 = 0, j = 0;
	while (j < N)
	{
		scanf("%c", &b);
		if (b == ' ')
		{
			flag1 = 1;
		}
		if (b == '\n')
		{
			flag2 = 1;
		}
		if (flag1 == 0)
		{
			if (flag2 == 0)
			{
				push(q,b);
				j++;
			}
		}
		flag1 = 0;
		flag2 = 0;
	}
	return 0;
}
