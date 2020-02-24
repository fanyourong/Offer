// jumpFloor.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

int jumpFloor(int number) 
{
	if (number == 1)
		return 1;
	if (number == 2)
		return 2;
	int res = 0;
	int one = 1, two = 2;
	for (int i = 3; i <= number; i++)
	{
		res = one + two;
		one = two;
		two = res;
	}
	return res;
}