// stack2queen.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<stack>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
}

class Solution
{
public:
	void push(int node)
	{
		stack1.push(node);
	}
	
	int pop()
	{
		int res = 0;
		if (stack2.empty())
		{			
			while (!stack1.empty())
			{
				res = stack1.top();
				stack1.pop();
				stack2.push(res);
			}
		}
		res = stack2.top();
		stack2.pop();
		return res;
		
	}

private:
	stack<int> stack1;
	stack<int> stack2;
};

