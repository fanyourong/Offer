// minNumberInRotateArray.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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

	int minNumberInRotateArray(vector<int> rotateArray) 
	{
		if (rotateArray.size() == 0)
			return 0;
		int min = rotateArray[0];
		for (int i = 0; i < rotateArray.size(); i++)
		{
			if (min > rotateArray[i])
				min = rotateArray[i];
		}
		return min;
	}
};