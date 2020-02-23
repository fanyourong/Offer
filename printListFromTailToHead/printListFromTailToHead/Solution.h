#pragma once
#include<vector>
using namespace std;
class Solution
{
public:
	struct ListNode
	{
		int val;
		struct ListNode *next;
		ListNode(int x) :val(x), next(NULL) {}
		vector<int> printListFromTailToHead(ListNode * head);
	};
	vector<int> printListFromTailToHead(ListNode* head);
};
