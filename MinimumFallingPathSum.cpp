#include <bits/stdc++.h>

using namespace std;

int minFallingPathSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int ans = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j==0)
            {
                matrix[i][j] += min(matrix[i-1][j],matrix[i-1][j+1]);
            }
            else if(j == n-1)
            {
                matrix[i][j] += min(matrix[i-1][j],matrix[i-1][j-1]);
            }
            else
            {
                matrix[i][j] += min(matrix[i-1][j],matrix[i-1][j-1],matrix[i+1][j+1]);
            }
        }
        
    }
    for(auto x : matrix)
        for(auto y : x)
        {

            cout<<y<<" ";
        cout<<endl;
        }
    for (int i = 0; i < n; i++)
    {
        ans = min(ans,matrix[n-1][i]);
    }
    
    return ans;
}

int main()
{

    return 0;
}