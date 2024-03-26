#include<stdio.h>
#define STACK_SIZE 100//定义宏常量
//定义结构体
struct Stack
{
	int top;//顶部
	int buffer[STACK_SIZE];//缓冲区
};
//布尔类型
bool stack_push(struct Stack* s, int i)
{
	//判断栈是否满了
	if (s->top == STACK_SIZE - 1) {
		printf("Stack is overflow.\n");
		return false;
	}
	//没有满那么输入数据
	else {
		s->buffer[++(s->top)] = i;
		return true;
	}
}
//布尔类型
bool stack_pop(struct Stack* s, int* i)
{
	//判断栈是否空了
	if (s->top == -1) {
		printf("Stack is empty.\n");
		return false;
	}
	//没有空那么输出数据
	else {
		*i = s->buffer[(s->top)--];
		return true;
	}
}
//主函数
int main() {
	struct Stack st1, st2;//定义结构体变量
	int x;//定义整型变量
	st1.top = -1;//初始化赋值操作
	st2.top = -1;//初始化赋值操作
	stack_push(&st1, 12);//调用函数，输入数据
	stack_pop(&st1, &x);//调用函数，输出数据
	stack_push(&st2, 20);//调用函数，输入数据
	stack_pop(&st2, &x);//调用函数，输出数据
	return 0;//结束
}