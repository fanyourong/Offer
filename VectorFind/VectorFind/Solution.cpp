#include "Solution.h"
using namespace std;

bool Solution::Find(int target, vector<vector<int> > array)
{
	int row = array.size();
	int colum = array[0].size();
	int i = row - 1;
	int j = 0;
	while (i >= 0 && j < colum)
	{
		if (target < array[i][j])
			i--;
		else if (target > array[i][j])
			j++;
		else
		{
			return true;
		}
	}
	return false;
}
