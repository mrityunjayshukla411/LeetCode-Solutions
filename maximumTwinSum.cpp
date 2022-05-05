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

void printList(ListNode *head)
{
    while(head)
    {
        cout<<head->val<<" ";
        head = head->next;
    }
}
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

ListNode* midEle(ListNode* head)
{
    ListNode* slow = head;
    ListNode* fast = head;
    while ( fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

ListNode* reverseList(ListNode* head)
{
    // int n = printList(head);
    ListNode *prev = NULL;
    // for (int i = 0; i < n; i++)
    while(head)
    {
        ListNode *temp = head->next;
        head->next = prev;
        prev = head;
        head = temp;
    }
    return prev;
}



int pairSum(ListNode *head)
{
    int n = length(head);
    ListNode *temp = head;
    ListNode *mid = midEle(head);
    for (int i = 0; i < n/2 - 1; i++)
    {
        temp = temp->next;
    }
    mid = reverseList(mid);
    temp->next = mid;
}

int main()
{

    return 0;
}