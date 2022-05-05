#include <bits/stdc++.h>

using namespace std;

int oddCells(int m, int n, vector<vector<int>> &indices)
{
    vector<vector<int>> res(n, vector<int>(m, 0));
    for (auto x : indices)
    {

        for (int i = 0; i < n; i++)
        {
            res[x[0]][i]++;
        }
        for (int i = 0; i < m; i++)
        {
            res[i][x[1]]++;
        }
    }
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(res[i][j] % 2)
            {
                cnt++;
            }
        }
        
    }
    return cnt;
}

int main()
{

    return 0;
}