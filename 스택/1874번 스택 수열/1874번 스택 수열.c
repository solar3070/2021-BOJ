#include <stdio.h>
#include <stdlib.h>

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

int main(void)
{
	StackType s;
	int i, n, num = 1;
	int *arr;
	char *result;
	int idx = 0, result_idx = 0;

	scanf("%d", &n);
	arr = (int *)malloc(sizeof(int) * n);
	result = (char *)malloc(sizeof(char) * (n * 2));	
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	init(&s);

	for (i = 0; i < n * 2; i++) {
		if (s.top == -1 || s.data[s.top] < arr[idx]) {
			push(&s, num++);
			result[result_idx++] = '+';
		}
		else if (s.data[s.top] == arr[idx]) {
			pop(&s);
			result[result_idx++] = '-';
			idx++;
		}
	}
	if (s.top == -1)
		for (i = 0; i < result_idx; i++)
			printf("%c\n", result[i]);
	else
		printf("NO\n");

	free(result);
	free(arr);
}