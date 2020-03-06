// Min_Stack.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stack> 
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
}

class Solution {
public:
	stack<int> stack1;
	stack<int> stack_min;
	void push(int value) {
		stack1.push(value);
		if (stack_min.empty())
		{
			stack_min.push(value);
		}
		if(value<=stack_min.top())
		{
			stack_min.push(value);
		}
	}
	void pop() {
		if (stack1.top() == stack_min.top())
		{
			stack_min.pop();
		}
		stack1.pop();
	}
	int top() {
		return stack1.top();
	}
	int min() {
		return stack_min.top();
	}
};