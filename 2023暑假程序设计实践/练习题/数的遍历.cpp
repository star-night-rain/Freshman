#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n;
vector<int>result;
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

TreeNode* traversal(vector<int>inorder, vector<int>postorder)
{
	if (postorder.empty())
		return nullptr;
	int value = postorder.back();
	TreeNode* root = new TreeNode(value);
	if (postorder.size() == 1)
		return root;
	int index = 0;
	for (int i = 0; i < inorder.size(); i++)
		if (inorder[i] == value)
		{
			index = i;
			break;
		}
	vector<int>left_inorder(inorder.begin(), inorder.begin() + index);
	vector<int>right_inorder(inorder.begin() + index + 1, inorder.end());
	postorder.pop_back();
	vector<int>left_postorder(postorder.begin(), postorder.begin() + left_inorder.size());
	vector<int>right_postorder(postorder.begin() + left_inorder.size(), postorder.end());
	root->left = traversal(left_inorder, left_postorder);
	root->right = traversal(right_inorder, right_postorder);
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
	vector<int>postorder(n), inorder(n);
	for (int i = 0; i < n; i++)
		cin >> postorder[i];
	for (int i = 0; i < n; i++)
		cin >> inorder[i];
	root = traversal(inorder, postorder);
	level_traversal(root);
	cout << result[0];
	for (int i = 1; i < result.size(); i++)
		cout << " " << result[i];
	return 0;
}