// rectCover.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

class Solution {
public:
	int rectCover(int number) {
		if (number < 1)
			return 0;
		else if (number == 1)
			return 1;
		else if (number == 2)
			return 2;
		else
		{
			return rectCover(number - 1) + rectCover(number - 2);
		}
	}
};