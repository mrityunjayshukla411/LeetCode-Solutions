#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void inOrderTraversal(TreeNode *root)
{
    if (root)
    {
        inOrderTraversal(root->left);
        cout << root->val << " ";
        inOrderTraversal(root->right);
    }
}

TreeNode *helper(vector<int> v, int str , int end)
{
    if (str > end)
    {
        return NULL;
    }

    int mid = str + (end-str)/2;
    TreeNode * root = new TreeNode(v[mid]);
    root->left = helper(v,str,mid-1);
    root->right = helper(v,mid+1,end);

    return root;
    
}

TreeNode *sortedArrayToBST(vector<int> &nums)
{
    return helper(nums,0,nums.size()-1);
}

int main()
{

    return 0;
}