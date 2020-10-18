#include <stdio.h>
#include <string.h>

#define MAX_STACK_SIZE 10000

typedef int element;
typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
} StackType;

void init(StackType *s)
{
	s->top = -1;
}

void push(StackType *s, element item)
{
	s->data[++(s->top)] = item;
}

void pop(StackType *s)
{
	if (s->top == -1)
		printf("-1\n");
	else
		printf("%d\n", s->data[(s->top)--]);
}

void size(StackType *s)
{
	printf("%d\n", s->top + 1);
}

void empty(StackType *s)
{
	if (s->top == -1)
		printf("1\n");
	else
		printf("0\n");
}

void top(StackType *s)
{
	if (s->top == -1)
		printf("-1\n");
	else
		printf("%d\n", s->data[s->top]);
}

int main(void)
{
	StackType s;
	int i, n, item;
	char cmd[10];
	init(&s);

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", cmd);
		
		if (!strcmp(cmd, "push")) {
			scanf("%d", &item);
			push(&s, item);
		}
		else if (!strcmp(cmd, "top") )
			top(&s);
		else if (!strcmp(cmd, "size"))
			size(&s);
		else if (!strcmp(cmd, "pop"))
			pop(&s);
		else
			empty(&s);
	}
}