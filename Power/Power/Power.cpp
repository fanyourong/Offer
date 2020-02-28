// Power.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

class Solution {
public:
	double Power(double base, int exponent) {
		double res = 1;
		double temp = base;
		if (base == 0 && exponent < 0)
			return false;
		else if (base == 0 && exponent == 0)
		{
			return 0;
		}
		else
		{
			while (exponent != 0)
			{
				if ((exponent & 1) == 1)
				{
					res = res * temp;
				}
				temp = temp * temp;
				exponent >> 1;
			}
			return base >= 0 ? res : 1 / res;
		}
	}
};