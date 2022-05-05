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

ListNode *final = new ListNode(0);
ListNode *res = final;
void helper(ListNode *l1, ListNode *l2)
{
    while (!l1 && !l2)
    {
        if (l1->val < l2->val)
        {
            final->next = l1;
            final = final->next;
            l1 = l1->next;
        }
        else
        {
            final->next = l2;
            final = final->next;
            l2 = l2->next;
        }
    }
}

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    if (!l1 && !l2)
    {
        return NULL;
    }
    else if (!l1)
    {
        return l2;
    }
    else if (!l2)
    {
        return l1;
    }
    helper(l1, l2);
    return res->next;
}

int main()
{
    // ListNode l1 = new ListNode(0)
    return 0;
}