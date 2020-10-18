#include <stdio.h>
#include <string.h>

#define MAX_CHAR_PER_LINE 101

typedef char element;
typedef struct {
	element data[MAX_CHAR_PER_LINE];
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

int is_match(StackType *s, element item)
{
	if ((s->data[s->top] == '(' && item == ')') || (s->data[s->top] == '[' && item == ']')) {
		pop(s);
		return 1;
	}
	else
		return 0;
}

int main(void)
{
	StackType s;
	int i;
	char str[MAX_CHAR_PER_LINE];

	gets(str);

	while (strcmp(str, ".")) {
		init(&s);
		for (i = 0; str[i] != '.'; i++)
			if (str[i] == '(' || str[i] == '[')
				push(&s, str[i]);
			else if (str[i] == ')' || str[i] == ']')
				if (!is_match(&s, str[i])) {
					s.top = 0;
					break;
				}

		if (s.top == -1)
			printf("yes\n");
		else
			printf("no\n");

		gets(str);
	}
}