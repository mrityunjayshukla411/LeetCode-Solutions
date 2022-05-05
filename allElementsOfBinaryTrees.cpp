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

void inOrderTraversal(TreeNode *root, vector<int> &v)
{
    if(root)
    {
        inOrderTraversal(root->left,v);
        v.push_back(root->val);
        inOrderTraversal(root->right,v);
    }
}

vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
{
    // vector<int> res;
    vector<int> v1;
    // vector<int> v2;
    inOrderTraversal(root1,v1);
    inOrderTraversal(root2,v1);
    // merge(v1.begin(), v1.end(), v2.begin(), v2.end(), res.begin());
    sort(v1.begin(), v1.end());
    // int i = 0, j = 0;
    // int n = v1.size();
    // int m = v2.size();
    // while ( i< n && j < m)
    // {
    //     if (v1[i] < v2[j])
    //     {
    //         res.push_back(v1[i]);
    //         i++;
    //     }
    //     else
    //     {
    //         res.push_back(v2[j]);
    //         j++;
    //     }
        
    // }
    // while(i<n)
    // {
    //     res.push_back(v1[i]);
    //     i++;
    // }
    // while(j<m)
    // {
    //     res.push_back(v2[j]);
    //     j++;
    // }
    
    return v1;
}

int main()
{

    return 0;
}