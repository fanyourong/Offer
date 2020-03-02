// Mirror.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x):
		val(x),left(nullptr),right(nullptr){}
};

class Solution {
public:
	void Mirror(TreeNode *pRoot) 
	{
		if (pRoot == nullptr)
			return;
		TreeNode* temp = nullptr;
		temp = pRoot->left;
		pRoot->left = pRoot->right;
		pRoot->right = temp;
		Mirror(pRoot->left);
		Mirror(pRoot->right);
	}
};