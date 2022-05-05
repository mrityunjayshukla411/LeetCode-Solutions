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

// ListNode *deleteDuplicates(ListNode *head)
// {
//     if (!head || !head->next)
//     {
//         return head;
//     }

//     ListNode *curr = head;
//     set<int> s;
//     while (curr)
//     {
//         s.insert(curr->val);
//         curr = curr->next;
//     }
//     curr = head;
//     cout << s.size() << endl;
//     ListNode *res = new ListNode(*s.begin());
//     ListNode *temp = res;
//     for (auto it = ++s.begin(); it != s.end(); it++)
//     {
//         cout<<*it<<endl;
//         temp->next = new ListNode(*it);
//         temp = temp->next;
//     }

//     return res;
// }
ListNode *deleteDuplicates(ListNode *head)
{
    ListNode *curr = head;
    ListNode *temp = head;
    while (temp)
    {
        curr = temp;
        temp = temp->next;
        while (temp != NULL && temp->val == curr->val)
        {
            temp = temp->next;
        }
        curr->next = temp;
    }
    return head;
}

// ListNode *deleteDuplicates(ListNode *head)
// {
//     ListNode *i, *j;
//     j = head;
//     while (head)
//     {
//         i = head;
//         head = head->next;
//         while (head != NULL && head->val == i->val)
//         {
//             head = head->next;
//         }
//         i->next = head;
//     }
//     return j;
// }

int main()
{
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(1);
    // l1->next->next = new ListNode(2);
    // l1->next->next->next = new ListNode(3);
    // l1->next->next->next->next = new ListNode(3);
    // l1->next->next->next->next->next = new ListNode(4);
    ListNode *res = deleteDuplicates(l1);
    while (res)
    {
        cout << res->val << " ";
        res = res->next;
    }
    return 0;
}