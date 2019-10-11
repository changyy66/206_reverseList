// 206_reverseList.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
��תһ��������

ʾ��:

����: 1->2->3->4->5->NULL
���: 5->4->3->2->1->NULL
����:
����Ե�����ݹ�ط�ת�������ܷ������ַ����������⣿

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/reverse-linked-list
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������	
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

