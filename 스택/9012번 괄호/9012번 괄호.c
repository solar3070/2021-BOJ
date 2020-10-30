#include <stdio.h>

#define MAX_STACK_SIZE 51

typedef char element;
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

int main(void)
{
	int i, j, T;
	char VPS[51];
	StackType s;

	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		init(&s);
		scanf("%s", VPS);

		for (j = 0; VPS[j] != '\0'; j++) {
			if (VPS[j] == '(')
				push(&s, VPS[j]);
			else
				pop(&s);

			if (s.top < -1)
				break;
		}

		if (s.top == -1)
			printf("YES\n");
		else
			printf("NO\n");
	}
}