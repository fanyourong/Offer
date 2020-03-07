// VerifySquenceOfBST.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
}

class Solution 
{
public:
	bool VerifySquenceOfBST(vector<int> sequence) 
	{
		return BST(sequence, 0, sequence.size() - 1);
	}

	bool BST(vector<int> vec, int begin, int end)
	{
		if (begin > end || vec.empty())
			return false;
		int root = vec[end];
		int i = begin;
		for (; i < end; i++)
		{
			if (vec[i] > root)
			{
				break;
			}
		}
		for (int j = i; j < end; j++)
		{
			if (root > vec[j])
				return false;
		}
		bool left = true;
		if (i > begin)
			left = BST(vec, begin, i-1);
		bool right = true;
		if (i < end - 1)
			right = BST(vec, i, end - 1);
		return left && right;
	
	}
};