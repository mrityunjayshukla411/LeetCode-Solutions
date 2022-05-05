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

ListNode *deleteDuplicates(ListNode *head)
{
    map<int,int> m;
    ListNode *curr = head;
    while (curr)
    {
        if (m.find(curr->val) == m.end())
        {
            m[curr->val] = 1;
        }
        else
        {
            m[curr->val]++;
        }
        curr = curr->next;
    }
    curr = head;
    ListNode *res = new ListNode(0);
    ListNode *temp1 = res;
    while (curr)
    {
        if (m[curr->val] == 1)
        {
            ListNode *temp = new ListNode(curr->val);
            temp1->next = temp;
            temp1 = temp1->next;
        }
        curr = curr->next;
    }
    return res->next;
}

int main()
{
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(1);
    l1->next->next = new ListNode(2);
    l1->next->next->next = new ListNode(3);
    l1->next->next->next->next = new ListNode(3);
    l1->next->next->next->next->next = new ListNode(4);
    ListNode *res = deleteDuplicates(l1);
    while (res)
    {
        cout << res->val << " ";
        res = res->next;
    }
    return 0;
}