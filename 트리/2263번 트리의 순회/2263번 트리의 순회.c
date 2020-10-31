#include <stdio.h>

int inorder[100001];
int postorder[100001];
int pos[100001];

void print_pre(int inF, int inL, int postF, int postL)
{
	int root, p, left;
	if (inF > inL || postF > postL) 
		return;
	root = postorder[postL];
	printf("%d ", root);

	p = pos[root];
	left = p - inF;
    print_pre(inF, p - 1, postF, postF + left - 1);
    print_pre(p + 1, inL, postF + left, postL - 1);
}

int main(void)
{
	int i, n;
	scanf("%d", &n);

	for (i = 0; i < n; i++) 
		scanf("%d", &inorder[i]);
	for (i = 0; i < n; i++) 
		scanf("%d", &postorder[i]);
	for (i = 0; i < n; i++) 
		pos[inorder[i]] = i;

	print_pre(0, n - 1, 0, n - 1);
}