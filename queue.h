#pragma once
#define N 3
struct queue //�������
{
	char que[N];
	int quefirst, quelast;
};
void init_que(struct queue* q); //������������� �������
void push(struct queue* q, char x); //������� � ������� ��������
int is_empty(struct queue* q); //�������� �������
void print(struct queue* q); //����� ���������
int pop(struct queue* q);//�������� ���������