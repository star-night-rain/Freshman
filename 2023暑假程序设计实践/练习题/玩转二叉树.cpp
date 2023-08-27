#include <iostream>
#include <deque>
#include <queue>
using namespace std;
int n;
deque<int>result;

struct TreeNode
{
	int value;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x)
	{
		value = x;
		left = nullptr;
		right = nullptr;
	}
}*root;

TreeNode* traversal(deque<int>preorder, deque<int>inorder)
{
	if (preorder.empty())
		return nullptr;
	int value = preorder.front();
	TreeNode* root = new TreeNode(value);
	if (preorder.size() == 1)
		return root;
	int index = 0;
	for (int i = 0; i < inorder.size(); i++)
		if (inorder[i] == value)
		{
			index = i;
			break;
		}
	deque<int>left_inorder(inorder.begin(), inorder.begin() + index);
	deque<int>right_inorder(inorder.begin() + index + 1, inorder.end());
	preorder.pop_front();
	deque<int>left_preorder(preorder.begin(), preorder.begin() + left_inorder.size());
	deque<int>right_preorder(preorder.begin() + left_inorder.size(), preorder.end());
	root->left = traversal(right_preorder, right_inorder);
	root->right = traversal(left_preorder, left_inorder);
	return root;
}

void level_traversal(TreeNode* root)
{
	queue<TreeNode*> que;
	int size;
	if (root != nullptr)
		que.push(root);
	while (!que.empty())
	{
		size = que.size();
		for (int i = 0; i < size; i++)
		{
			TreeNode* node = que.front();
			que.pop();
			result.push_back(node->value);
			if (node->left)
				que.push(node->left);
			if (node->right)
				que.push(node->right);
		}
	}
}

int main()
{
	cin >> n;
	deque<int>preorder(n), inorder(n);
	for (int i = 0; i < n; i++)
		cin >> inorder[i];
	for (int i = 0; i < n; i++)
		cin >> preorder[i];
	root = traversal(preorder, inorder);
	level_traversal(root);
	cout << result[0];
	for (int i = 1; i < result.size(); i++)
		cout << " " << result[i];
	return 0;
}