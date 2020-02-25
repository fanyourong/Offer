// jumpFloorII.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

class Solution {
public:
	int jumpFloorII(int number) 
	{
		if (number <= 0)
			return -1;
		else if (number == 1)
			return 1;
		else
		{
			return 2 * jumpFloorII(number - 1);
		}
	}
};