// FindPath.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using namespace std;
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
	vector<vector<int> > res;
	vector <int> temp;
	void Find(TreeNode* node, int expectNumber) 
	{
		int now = node->val;
		if (node == nullptr)
			return;
		temp.push_back(node->val);
		if (expectNumber-now == 0&& node->left == nullptr&&node->right==nullptr)
		{
			res.push_back(temp);
		}
		else
		{
			if (node->left != nullptr)
				Find(node->left, expectNumber - now);
			if (node->right != nullptr)
				Find(node->right, expectNumber - now);
		}
		temp.pop_back();
	}

	vector<vector<int> > FindPath(TreeNode* root, int expectNumber)
	{
		Find(root, expectNumber);
		return res;
	}
};