#pragma once
#define N 3
struct queue //очередь
{
	char que[N];
	int quefirst, quelast;
};
void init_que(struct queue* q); //инициализация очереди
int push(struct queue* q, char x); //вставка в очередь элемента
int is_empty(struct queue* q); //проверка очереди
int print(struct queue* q); //вывод элементов
int pop(struct queue* q);//удаление элементов
char check(struct queue* q);//проверяет на пробелы и энтеры и вводит их в массив очереди
