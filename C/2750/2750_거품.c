#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *A, int n)
{
	int i, j, temp;
	int sorted;

	for (i = 0; i < n - 1; i++) {
		sorted = 0;
		for (j = 0; j < n - i - 1; j++)
			if (A[j] > A[j + 1]) {
				temp = A[j + 1];
				A[j + 1] = A[j];
				A[j] = temp;

				sorted = 1;
			}
		if (!sorted) 
			return;
	}
}

int main(void)
{
	int n, i;
	int *arr;

	scanf("%d", &n);
	arr = (int *)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	bubbleSort(arr, n);

	for (i = 0; i < n; i++)
		printf("%d\n", arr[i]);
}