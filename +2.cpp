#include<stdio.h>
#define STACK_SIZE 100//����곣��
//����ṹ��
struct Stack
{
	int top;//����
	int buffer[STACK_SIZE];//������
};
//��������
bool stack_push(struct Stack* s, int i)
{
	//�ж�ջ�Ƿ�����
	if (s->top == STACK_SIZE - 1) {
		printf("Stack is overflow.\n");
		return false;
	}
	//û������ô��������
	else {
		s->buffer[++(s->top)] = i;
		return true;
	}
}
//��������
bool stack_pop(struct Stack* s, int* i)
{
	//�ж�ջ�Ƿ����
	if (s->top == -1) {
		printf("Stack is empty.\n");
		return false;
	}
	//û�п���ô�������
	else {
		*i = s->buffer[(s->top)--];
		return true;
	}
}
//������
int main() {
	struct Stack st1, st2;//����ṹ�����
	int x;//�������ͱ���
	st1.top = -1;//��ʼ����ֵ����
	st2.top = -1;//��ʼ����ֵ����
	stack_push(&st1, 12);//���ú�������������
	stack_pop(&st1, &x);//���ú������������
	stack_push(&st2, 20);//���ú�������������
	stack_pop(&st2, &x);//���ú������������
	return 0;//����
}