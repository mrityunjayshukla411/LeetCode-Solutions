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

ListNode *res = new ListNode(0);
ListNode *temp = res;
void helper(ListNode *l1, ListNode *l2)
{
    if (!l1) {temp->next = l2;  return ;}
    if (!l2) {temp->next = l1;  return ;}
    
    if (l1->val < l2->val)
    {
        temp->next = l1;
        temp = temp->next;

        helper(l1->next, l2);
    }
    else
    {
        temp->next = l2;
        temp = temp->next;
        helper(l1, l2->next);
    }
}

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    if (!l1 && !l2)
    {
        return NULL;
    }
    if (!l1 || !l2)
    {
        if (!l1)
        {
            return l2;
        }
        else
        {
            return l1;
        }
    }
    helper(l1,l2);
    return res->next;
}

void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val << endl;
        head = head->next;
    }
}

int main()
{
    ListNode *head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(4);
    ListNode *head2 = new ListNode(1);
    head2->next = new ListNode(2);
    head2->next->next = new ListNode(4);
    ListNode *head = mergeTwoLists(head1, head2);
    printList(head);
    return 0;
}