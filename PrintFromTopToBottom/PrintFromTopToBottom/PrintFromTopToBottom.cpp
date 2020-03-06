// PrintFromTopToBottom.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <queue>
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
	vector<int> PrintFromTopToBottom(TreeNode* root) 
	{
		vector<int> res;
		queue<TreeNode*> q;
		if (root == nullptr)
			return res;
		q.push(root);
		while (!q.empty())
		{
			res.push_back(q.front()->val);
			if (q.front()->left != nullptr)
				q.push(q.front()->left);
			if (q.front()->right != nullptr)
				q.push(q.front()->right);
			q.pop();
		}
		return res;
	}
};