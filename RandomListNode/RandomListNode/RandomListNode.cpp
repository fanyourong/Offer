// RandomListNode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

struct RandomListNode {
	int label;
	struct RandomListNode *next, *random;
	RandomListNode(int x) :
			label(x), next(NULL), random(NULL) {
	}
};

class Solution {
public:
	RandomListNode* Clone(RandomListNode* pHead)
	{
		if (!pHead) return nullptr;
		RandomListNode* cur = pHead;		
		while (cur)
		{
			RandomListNode* node = new RandomListNode(cur->label);
			node->next = cur->next;
			cur->next = node;
			cur = node->next;
		}

		cur = pHead;
		RandomListNode *p;
		while (cur) {
			p = cur->next;
			if (cur->random) {
				p->random = cur->random->next;

			}
			cur = p->next;
		}
		
		RandomListNode* CloneHead = pHead->next;
		cur = pHead;
		RandomListNode* temp;
		while (cur->next)
			//为什么这里的判断是next？？
		{
			temp = cur->next;
			cur->next = temp->next;
			cur = temp;
		}

		return CloneHead;
	}
};