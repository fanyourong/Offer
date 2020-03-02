// printMatrix.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
}

class Solution 
{
public:
	vector<int> printMatrix(vector<vector<int> > matrix)
	{
		int row = matrix.size();
		int col = matrix[0].size();
		int circle = ((row<col?row:col)-1)/2+1;
		vector<int> res;
		for (int i = 0; i < circle; i++)
		{
			for (int j = i; j <= col - 1 - i; j++)
			{
				res.push_back(matrix[i][j]);
			}

			for (int k = i + 1; k <= row - 1 - i; k++)
			{
				res.push_back(matrix[k][col - 1 - i]);
			}
			for (int m = col - i - 2; (m >= i) && (row - 1 - i != i); m--)
			{
				res.push_back(matrix[row - 1 - i][m]);
			}
			for (int n = row - 2 - i; (n >= i + 1) && (col - 1 - i != i); n--)
			{
				res.push_back(matrix[n][i]);
			}
		}
		return res;
	}
};