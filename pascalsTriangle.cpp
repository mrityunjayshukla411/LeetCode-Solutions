#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> res;
    if(!numRows) return res;
    for (int i = 1; i <= numRows; i++)
    {
        vector<int> v;
        for(int j = 0 ; j < i ; j++)
        {
            if (j == 0 || j == i-1)
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(res[i-2][j-1] + res[i-2][j]);
            }
            
        }
        res.push_back(v);
    }
    return res;
}

int main()
{
    int n;
    cin >> n; 
    vector<vector<int>> res = generate(n);
    // cout<<"hello";
    for(auto x : res)
        for(auto y : x)
            cout<<y<<" ";
    return 0;
}