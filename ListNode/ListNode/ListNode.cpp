// ListNode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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


struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};
class Solution {
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
		ListNode* pfirst = pListHead;
		ListNode* psecond = pListHead;
		for (int i = 0; i < k; i++)
		{
			if (pfirst == nullptr)
				return nullptr;
			else
			{
				pfirst = pfirst->next;
			}			
		}
		while (pfirst != nullptr)
		{
			pfirst = pfirst->next;
			psecond = psecond->next;
		}
		return psecond;

	}
};