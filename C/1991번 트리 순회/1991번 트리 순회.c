#include <stdio.h>
#include <stdlib.h>

typedef char element;
typedef struct TreeNode {
	element data;
	struct TreeNode *left, *right;
} TreeNode;

TreeNode *new_node(element item)
{
	TreeNode * temp = (TreeNode *)malloc(sizeof(TreeNode));
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}

TreeNode *search(TreeNode * node, element data)
{
	TreeNode *temp;
	if (node == NULL) return NULL;
	if (data == node->data) return node;
	else  {
		temp = search(node->left, data);
		if (temp != NULL)
			return temp; 
		return search(node->right, data);
	}
}

TreeNode *insert_node(TreeNode *root, char ch, char lCh, char rCh)
{
	TreeNode *p;
	if (root == NULL)
		root = new_node(ch);
	p = search(root, ch);
	if (lCh != '.') 
		p->left = new_node(lCh);
	if (rCh != '.') 
		p->right = new_node(rCh);
	return root;
}

void preorder(TreeNode * root) {
	if (root) {
		printf("%c", root->data);  
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(TreeNode * root) {
	if (root) { 
		inorder(root->left);
		printf("%c", root->data); 
		inorder(root->right);
	}
}

void postorder(TreeNode * root) {
	if (root) { 
		postorder(root->left);
		postorder(root->right);
		printf("%c", root->data); 
	}
}

int main(void)
{
	TreeNode *root = NULL;
	int i, j, n;
	char ch, lCh, rCh;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		while(getchar() != '\n');
		scanf("%c %c %c", &ch, &lCh, &rCh);
		root = insert_node(root, ch, lCh, rCh);
	}
	preorder(root);
	printf("\n");
	inorder(root);
	printf("\n");
	postorder(root);
	printf("\n");
}