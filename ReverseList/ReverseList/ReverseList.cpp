// ReverseList.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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
	ListNode* ReverseList(ListNode* pHead) {
		ListNode* pre = nullptr;
		ListNode* cur = pHead;
		ListNode* next = nullptr;
		if (cur == nullptr || cur->next == nullptr)
			return cur;
		while (cur->next != nullptr)
		{
			next = cur->next;
			cur->next = pre;
			pre = cur;
			cur = next;
		}
		return pre;
	}
};