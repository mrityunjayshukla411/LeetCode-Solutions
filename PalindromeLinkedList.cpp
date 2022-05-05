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

bool isPalindrome(ListNode *head)
{
    vector<int> v;
    while (head)
    {
        v.push_back(head->val);
        head = head->next;
    }
    int i = 0, j = v.size() - 1;
    int n = v.size();
    while (i < n && j >= 0)
    {
        if (v[i] != v[j])
        {
            /* code */
    return false;
        }
        i++, j++;
    }

    // vector<int> res = v;
    // reverse(v.begin(), v.end());
    // if (res == v)
    // {
    //     return true;
    // }
            return true;
}

int main()
{

    return 0;
}