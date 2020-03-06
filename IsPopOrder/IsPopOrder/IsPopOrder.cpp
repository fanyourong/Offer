// IsPopOrder.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
}

class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) 
	{
		vector<int> temp;
		for (int i = 0,j = 0; i < pushV.size();)
		{
			temp.push_back(pushV[i++]);
			while (j<popV.size() && popV[j] == temp.back())
			{
				temp.pop_back();
				j++;
			}
		}
		return temp.empty();
	}
};