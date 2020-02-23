// reConstructBinaryTree.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
}


 

 
 class Solution 
 {
 public:
	 struct TreeNode
	 {
		 int val;
		 TreeNode *left;
		 TreeNode *right;
		 TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	 };

	 TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
		 vector<int> pre_left, pre_right;
		 vector<int> vin_left, vin_right;
		 int temp = 0;
		 int length = vin.size();
		 if (length == 0)
			 return NULL;
		 TreeNode* head = new TreeNode(pre[0]);
		 // temp存放的是前序遍历第一个元素在中序遍历中的位置
		 for (int i = 0; i < length; i++)
		 {
			 if (pre[0] == vin[i])
			 {
				 temp = i;
				 break;
			 }
				 
		 }

		 for (int i = 0; i < temp; i++)
		 {
			 vin_left.push_back(vin[i]);
			 pre_left.push_back(pre[i + 1]);
		 }

		 for (int i = temp + 1; i < length; i++)
		 {
			 vin_right.push_back(vin[i]);
			 pre_right.push_back(pre[i]);
		 }


		 head->left = reConstructBinaryTree(pre_left, vin_left);
		 head->right = reConstructBinaryTree(pre_right, vin_right);
		 return head;
 };