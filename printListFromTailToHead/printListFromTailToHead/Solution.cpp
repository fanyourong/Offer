#include "Solution.h"

vector<int> Solution::ListNode::printListFromTailToHead(ListNode * head)
{
	vector<int> value;
	if (head != nullptr)
	{
		value.insert(value.begin(), head->val);
		while (head->next!=nullptr)
		{
			value.insert(value.begin(), head->next->val);
			head = head->next;
		}
	}
	return value;
}
