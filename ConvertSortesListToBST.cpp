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

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *convert(ListNode *head, int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    int mid = (start + end) / 2;
    int i = 0;
    ListNode *curr = head;
    while (i < mid)
    {
        curr = curr->next;
        i++;
    }
    TreeNode *root = new TreeNode(curr->val);
    root->left = convert(head, start, mid - 1);
    root->right = convert(head, mid + 1, end);
    return root;
}

TreeNode *convertEfficient(ListNode **head, int n)
{
    if (n <= 0)
    {
        return NULL;
    }
    TreeNode *left = convertEfficient(head, n / 2);
    TreeNode *root = new TreeNode((*head)->val);
    root->left = left;
    *head = (*head)->next;
    root->right = convertEfficient(head, n - n / 2 - 1);
    return root;
}

ListNode *midNode(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *prev = NULL;

    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    return prev;
}
TreeNode *sortedListToBST(ListNode *head)
{
    if (!head)
    {
        return NULL;
    }
    if (!head->next)
    {
        return new TreeNode(head->val);
    }
    ListNode *mid = midNode(head);
    ListNode *nextt = mid->next;
    mid->next = NULL;
    TreeNode *root = new TreeNode(nextt->val);
    root->left = sortedListToBST(head);
    root->right = sortedListToBST(nextt->next);
    return root;
    
}
// TreeNode *sortedListToBST(ListNode *head)
// {
//     ListNode *curr = head;
//     int n = 0;
//     while (curr)
//     {
//         n++;
//         curr = curr->next;
//     }
//     return convertEfficient(&head, n);
// }

void inOrderTraversal(TreeNode *root)
{
    if (root)
    {
        inOrderTraversal(root->left);
        cout << root->val << " ";
        inOrderTraversal(root->right);
    }
}

int main()
{
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right = new TreeNode(8);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->right->right->left = new TreeNode(5);
    root->right->right->right = new TreeNode(1);
    // allPaths(root);
    ListNode *head = new ListNode(1);
    head->next = new ListNode(3);
    // head->next->next = new ListNode(0);
    // head->next->next->next = new ListNode(5);
    // head->next->next->next->next = new ListNode(9);
    TreeNode *rootNew = sortedListToBST(head);
    inOrderTraversal(rootNew);

    return 0;
}