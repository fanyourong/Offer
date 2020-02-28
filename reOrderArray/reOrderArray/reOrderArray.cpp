// reOrderArray.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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
	void reOrderArray(vector<int> &array) {
		vector<int> res;
		int length = array.size();
		for (int i = 0; i < length; i++)
		{
			if (array[i] % 2 == 1)
				res.push_back(array[i]);
		}
		for (int i = 0; i < length; i++)
		{
			if (array[i] % 2 == 0)
				res.push_back(array[i]);
		}
		array = res;
	}
};