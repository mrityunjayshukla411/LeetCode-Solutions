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

vector<ListNode *> splitListToParts(ListNode *head, int k)
{
    vector<ListNode *> res;
    ListNode *curr = head;
    int cnt = 0;
    while (curr)
    {
        cnt++;
        curr = curr->next;
    }
    int size = cnt / k;
    int first = cnt % k;
    curr = head;
    ListNode* nex;
    if (cnt < k)
    {
        while (curr)
        {
            ListNode *temp = new ListNode(curr->val);
            res.push_back(temp);

            curr = curr->next;
        }
        int ca = k - cnt;
        while (ca--)
        {
            res.push_back(NULL);
        }
    }
    else
    {
        curr = head;
        for (int i = 0; i < first; i++)
        {
            res.push_back(curr);
            for (int j = 0; j < size; j++)
            {
                curr = curr->next;
            }
            nex = curr->next;
            curr->next = NULL
        }
        curr = nex;
        for (int i = 0; i < k-first; i++)
        {
            res.push_back(curr);
            for (int j = 0; j < size-1 && curr-next; j++)
            {
                curr = curr->next;
            }
            nex = curr->next;
            curr->next = NULL;
        }
        
    }
    // cout<<cnt<<endl;
    return res;
}

int main()
{
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(1);
    l1->next->next = new ListNode(2);
    l1->next->next->next = new ListNode(3);
    l1->next->next->next->next = new ListNode(3);
    l1->next->next->next->next->next = new ListNode(4);
    vector<ListNode *> res = splitListToParts(l1, 3);
    return 0;
}