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

void inOrderTraversal(TreeNode *root, vector<int> &res)
{
    if (root)
    {
        inOrderTraversal(root->left, res);
        res.push_back(root->val);
        inOrderTraversal(root->right, res);
    }
}

TreeNode* buildTree(vector<int> res, int str,int end)
{
    if (str>end)
    {
        return NULL;
    }
    int mid = str + (end-str)/2;
    TreeNode *curr = new TreeNode(res[mid]);
    curr->left = buildTree(res,str,mid-1);
    curr->right = buildTree(res,mid+1,end);
    return curr;
    
}

// TreeNode* deleteNode(TreeNode* root, int key) {
//     vector<int> v;
//     inOrderTraversal(root,v);
//     int i = 0;
//     int flag = 0;
//     for ( i = 0; i < v.size(); i++)
//     {
//         if (v[i] == key)
//         {
//             flag = 1;
//             break;
//         }
        
//     }
//     if (flag)
//     {
//     v.erase(v.begin()+i);
//         /* code */
//     }
    
    
//     return buildTree(v,0,v.size()-1);
// }

TreeNode * inorderSucc(TreeNode * root)
{
    TreeNode *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
    
}

TreeNode* deleteNode(TreeNode * root, int key)
{
    if (!root)
    {
        return NULL;
    }
    
    if (key< root->val)
    {
        root->left = deleteNode(root->left,key);
    }
    else if (key > root->val)
    {
        /* code */
        root->right = deleteNode(root->right,key);
    }
    else
    {
        if (root->left == NULL)
        {
            TreeNode *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            TreeNode *temp = root->left;
            free(root);
            return temp;
            
        }

        TreeNode *temp = inorderSucc(root->right);
        root->val = temp->val;
        root->right = deleteNode(root->right, temp->val);
        
        
    }
    return root;
    
    
}

int main()
{
    TreeNode *root1 = new TreeNode(10);
    root1->left = new TreeNode(9);
    root1->right = new TreeNode(11);
    root1->right->right = new TreeNode(12);
    root1->right->right->right = new TreeNode(13);
    // root1->left->left = new TreeNode(13);
    // root1->left->right = new TreeNode(13);
    // root1->right->left = new TreeNode(13);
    // root1->right->right = new TreeNode(13);
    // TreeNode *root2 = new TreeNode(10);
    // root2->left = new TreeNode(11);
    // root2->right = new TreeNode(12);
    // root2->left->left = new TreeNode(13);
    // root2->left->right = new TreeNode(14);
    // preorderTraversal(root1);
    TreeNode * newN = deleteNode(root1,11);
    vector<int> res1;
    inOrderTraversal(newN,res1);
    for(auto x: res1)
        cout<<x<<" ";
    // preorderTraversal(root);

    return 0;
}