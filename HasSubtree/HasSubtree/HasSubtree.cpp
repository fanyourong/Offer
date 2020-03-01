// HasSubtree.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}


struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

class Solution {
public:
	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		if (pRoot1 == nullptr || pRoot2 == nullptr)
			return false;
		if (pRoot1->val == pRoot2->val)
			if (isSubtree(pRoot1, pRoot2))
				return true;
		if (HasSubtree(pRoot1->left, pRoot2))
			return true;
		if (HasSubtree(pRoot1->right, pRoot2))
			return true;
		return false;

	}
	bool isSubtree(TreeNode* pRootA, TreeNode* pRootB)
	{
		if (pRootB == nullptr) return true;
		if (pRootA == nullptr) return false;

		if (pRootA->val == pRootB->val)
		{
			if (isSubtree(pRootA->left, pRootB->left) && isSubtree(pRootA->right, pRootB->right))
				return true;
		}
		return false;
	}
};