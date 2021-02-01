#include <stdio.h>

#define MAX_STACK_SIZE 100000

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
	s->top--;
}

int get_total(StackType *s)
{
	int i, total = 0;
	
	for (i = 0; i <= s->top; i++)
		total += s->data[i];
	return total;
}

int main(void)
{
	int i, k, n;
	StackType s;
	init(&s);

	scanf("%d", &k);

	for (i = 0; i < k; i++) {
		scanf("%d", &n);

		if (n == 0)
			pop(&s);
		else
			push(&s, n);
	}
	printf("%d\n", get_total(&s)); 
}