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

int maxIncreaseKeepingSkyline(vector<vector<int>> &grid)
{
    vector<vector<int>> maxGrid(grid.size(),vector<int>(grid[0].size(),0));
    vector<vector<int>> maxGridCol(grid.size(),vector<int>(grid[0].size(),0));
    int r = grid.size();
    int c = grid[0].size();
    for(int i = 0; i < r ; i++)
    {
        int rowMax;
        for (int j = 0; j < c; j++)
        {
            rowMax = max(rowMax, grid[i][j]);
        }
        for (int j = 0; j < c; j++)
        {
            maxGrid[i][j]= rowMax;
        }
        
    }
    for(int i = 0; i < c ; i++)
    {
        int rowMax;
        for (int j = 0; j < r; j++)
        {
            rowMax = max(rowMax, grid[j][i]);
        }
        for (int j = 0; j < r; j++)
        {
            maxGridCol[j][i]= rowMax;
        }
        
    }
    for(int i = 0; i < r ; i++)
    {
        for (int j = 0; j < c; j++)
        {
            maxGrid[i][j] = min(maxGrid[i][j], maxGridCol[i][j]);
        }
        
    }

}

int main()
{

    return 0;
}