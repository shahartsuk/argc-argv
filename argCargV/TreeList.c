#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996) 

typedef struct tree {
	int val;
	struct tree* right;
	struct tree* left;
	struct tree* parent;
}t_tree;

t_tree* root = NULL;

void addNode(int);
void addNodeRecursive(t_tree*,t_tree*);
void printTheTree(t_tree*);

int main()
{
	t_tree* node = (t_tree*)malloc(sizeof(t_tree));
	if (!node)
	{
		return 1;
	}
	node->val = 15;
	node->right = node->parent = node->left = NULL;
	addNodeRecursive(node, root);
	node = (t_tree*)malloc(sizeof(t_tree));
	if (!node)
	{
		return 1;
	}
	node->val = 12;
	node->right = node->parent = node->left = NULL;
	addNodeRecursive(node, root);
	node = (t_tree*)malloc(sizeof(t_tree));
	if (!node)
	{
		return 1;
	}
	node->val = 7;
	node->right = node->parent = node->left = NULL;
	addNodeRecursive(node, root);
	node = (t_tree*)malloc(sizeof(t_tree));
	if (!node)
	{
		return 1;
	}
	node->val = 5;
	node->right = node->parent = node->left = NULL;
	addNodeRecursive(node, root);
	node = (t_tree*)malloc(sizeof(t_tree));
	if (!node)
	{
		return 1;
	}
	node->val = 2;
	node->right = node->parent = node->left = NULL;
	addNodeRecursive(node, root);
	node = (t_tree*)malloc(sizeof(t_tree));
	if (!node)
	{
		return 1;
	}
	node->val = 124566;
	node->right = node->parent = node->left = NULL;
	addNodeRecursive(node, root);

	printTheTree(root);
}

void addNode(int value)
{
	t_tree* leaf = (t_tree*)malloc(sizeof(t_tree));
	if (!leaf)
	{
		return;
	}
	t_tree* curr = root;
	leaf->val = value;
	leaf->parent = leaf->left = leaf->right = NULL;
	if (!root)
	{
		root = leaf;
	}
	else
	{
		while (curr)
		{
			if (leaf->val > curr->val && curr->right==NULL)
			{
				curr->right = leaf;
				leaf->parent = curr;
			}
			else if (leaf->val > curr->val)
			{
				curr = curr->right;
			}
			else if (leaf->val < curr->val && curr->left == NULL)
			{
				curr->left = leaf;
				leaf->parent = curr;
			}
			else
			{
				curr = curr->left;
			}
		}
	}
}

void addNodeRecursive(t_tree* node, t_tree* curr)
{

	if (!node)
	{
		return;
	}
	if (!root)
	{
		root=node;
		return;
	}
	else {
		if (node->val > curr->val && curr->right == NULL)
		{
			curr->right = node;
			node->parent = curr;
		}
		else if (node->val > curr->val)
		{
			curr = curr->right;
			addNodeRecursive(node, curr);
		}
		else if (node->val < curr->val && curr->left == NULL)
		{
			curr->left = node;
			node->parent = curr;
		}
		else
		{
			curr = curr->left;
			addNodeRecursive(node, curr);
		}
		return;
	}
}
void printTheTree(t_tree* curr)
{
	if (!curr)
	{
		return;
	}
	printTheTree(curr->left);
	printf("%d\n",curr->val );
	printTheTree(curr->right);
}