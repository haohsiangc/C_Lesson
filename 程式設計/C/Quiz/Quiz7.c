#include <stdio.h>
#include <stdlib.h>
typedef struct treeNode{
	int data;
	struct treeNode *left;
	struct treeNode *right;
} TreeNode;
int main(){
	TreeNode rootNode={2},leftNode={7},rightNode={5};
	TreeNode *rootPtr=&rootNode;
	rootPtr->left=&leftNode;
	rootPtr->right=&rightNode;//(*rootPtr).right=&rightNode
	system("pause");
	return 0;
}

