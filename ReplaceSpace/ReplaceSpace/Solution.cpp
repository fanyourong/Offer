#include "Solution.h"
void Solution::replaceSpace(char *str, int length)
{
	if (str == nullptr || length <= 0)
		return;
	int oldLength = 0;
	int count = 0;
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			count++;
		oldLength++;
		i++;
	}

	int newLength = oldLength + 2 * count;
	if (oldLength >= length)
		return;
	while (newLength >= 0 && newLength>oldLength)
	{
		if (str[oldLength] == ' ')
		{
			str[newLength--] = '0';
			str[newLength--] = '2';
			str[newLength--] = '%';
		}
		else
		{
			str[newLength--] = str[oldLength];
		}
		oldLength--;
	}
	
//}
