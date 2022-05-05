#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int length(ListNode *head)
{
    int cnt = 0;
    while(head)
    {
        head = head->next;
        cnt++;
    }
    return cnt;
}

ListNode* reverseList(ListNode* head)
{
    ListNode *prev = NULL;
    while(head)
    {
        ListNode *temp = head->next;
        head->next = prev;
        prev = head;
        head = temp;
    }
    return prev;
}


ListNode *swapNodes(ListNode *head, int k)
{
    int n = length(head);
    ListNode *temp1 = head;
    ListNode *temp2 = head;
    ListNode *node1 = head;
    ListNode *node2 = head;

    for (int i = 0; i < k-2; i++)
    {
        node1 = node1->next;
    }
    for (int i = 0; i < n-k-2; i++)
    {
        node2 = node2->next;
    }
    temp1 = node1->next;
    temp2 = node2->next;
    node1->next = node2->next;
    node1->next->next = node2->next->next;
    node2->next = temp1;
    node2->next->next = temp1->next;
    return head;
}

int main()
{

    return 0;
}