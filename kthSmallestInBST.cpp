#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<int> res;
void inOrderTraversal(TreeNode *root, int k)
{
    // cout<<k<<endl;
    if (root)
    {
        inOrderTraversal(root->left, --k);
        res.push_back(root->val);
        inOrderTraversal(root->right, --k);
    }
}
// Recursive
// int kthSmallest(TreeNode *root, int k)
// {
//     inOrderTraversal(root, k);
//     return res[--k];
// }

// Iterative
int kthSmallest(TreeNode *root, int k)
{
    stack<TreeNode *> st;
    while (!st.empty() || root != NULL)
    {
        while (root != NULL)
        {
            st.push(root);
            root = root->left;
        }
        root = st.top();
        st.pop();
        if (--k == 0)
        {
            return root->val;
        }
        // cout<<root->val<<endl;
        root = root->right;
    }
    return 0;
}

int main()
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->left->right = new TreeNode(2);
    cout << kthSmallest(root, 4);
    return 0;
}