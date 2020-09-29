//очередь реализация получения/удаления элемента
#define _CRT_SECURE_NO_WARNINGS
#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
	int i=0;
	struct queue* q;
	q = malloc(sizeof(struct queue));
	init_que(q);
	printf("enetry element's queue\n");
	check(q);
	print(q);
	while (q->quefirst != N + 1)
	{
			pop(q);
			printf("delet element %c\n");
			print(q);
	}
	system("pause");
	free(q);
	return 0;
}
