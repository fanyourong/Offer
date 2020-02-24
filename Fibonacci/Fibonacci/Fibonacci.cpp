// Fibonacci.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}
int Fibonacci(int n) 
{
	if (n == 0)
		return 0;
	if (n == 1 || n == 2)
		return 1;
	int a = 1, b = 1, result = 0;
	for (int i = 3; i <= n; i++)
	{
		result = a + b;
		a = b;
		b = result;
	}
	return result;
}