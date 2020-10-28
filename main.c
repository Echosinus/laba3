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
	check(q);
	print(q);
	for (int i = 0; i < 3; i++)
	{
		pop(q);
		printf("delet element %c\n");
		print(q);
	}
	system("pause");
	free(q);
	return 0;
}
