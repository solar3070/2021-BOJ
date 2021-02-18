#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *A, int n)
{
	int i, j, temp;

	for (i = 1; i < n; i++) {
		temp = A[i];
		for (j = i - 1; j >= 0; j--)
			if (temp < A[j]) 
				A[j + 1] = A[j];
			else
				break;
		A[j + 1] = temp;
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

	insertionSort(arr, n);

	for (i = 0; i < n; i++)
		printf("%d\n", arr[i]);
}