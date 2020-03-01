// Merge.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}


struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};
class Solution {
public:
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
	{
		ListNode* newpHead = nullptr;
		if (pHead1 == nullptr) return pHead2;
		if (pHead2 == nullptr) return pHead1;
		if (pHead1->val <= pHead2->val)
		{
			newpHead = pHead1;
			newpHead->next = Merge(pHead1->next, pHead2);
		}
		else
		{
			newpHead = pHead2;
			newpHead->next = Merge(pHead1, pHead2->next);
		}
		return newpHead;
	}
};