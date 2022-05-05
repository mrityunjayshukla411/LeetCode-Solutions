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



ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
{
    ListNode *curr = list1;
    int i = 0;
    while (i < b)
    {
        curr = curr->next;
        i++;
    }
    ListNode *temp = list2;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = curr->next;
    curr = list1;
    cout << i << endl;
    i = 0;
    while (i < a - 1)
    {
        curr = curr->next;
        i++;
    }
    cout << i << endl;
    curr->next = list2;
    return list1;
}

int main()
{

    return 0;
}