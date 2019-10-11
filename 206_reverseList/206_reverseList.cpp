// 206_reverseList.cpp : 定义控制台应用程序的入口点。
//
/*
反转一个单链表。

示例:

输入: 1->2->3->4->5->NULL
输出: 5->4->3->2->1->NULL
进阶:
你可以迭代或递归地反转链表。你能否用两种方法解决这道题？

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/reverse-linked-list
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。	
*/
#include "stdafx.h"

/**
* Definition for singly-linked list.
*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* reverse(ListNode* head)
	{
		if (head->next == NULL)return head;
		ListNode* tmp = head->next;
		head->next = NULL;
		reverse(tmp)->next = head;
		return head;
	}
	ListNode* reverseList1(ListNode* head) {
		if (!head)return head;
		ListNode* tmp = head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		reverse(head);
		return tmp;
	}
	ListNode* reverseList(ListNode* head) {
		if (!head)return head;
		ListNode* tmp = head;
		ListNode* next;
		while (tmp->next)
		{
			next = tmp->next;
			tmp->next = next->next;
			next->next = head;
			head = next;
		}
		return head;
	}
};
int main()
{
    return 0;
}

