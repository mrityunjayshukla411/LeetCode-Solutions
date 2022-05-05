#include <bits/stdc++.h>

using namespace std;
int dp[101][202];
int help(int i , int m , vector<int> v)
{
    if(i >= v.size()) return 0;
    if(dp[i][m] != -1) return dp[i][m];
    int tot = 0;
    int ans = INT_MIN;
    for (int j = i; j < 2*m; j++)
    {
        if(i+j < v.size()) 
        {
            tot += v[i+j];
        }
        ans = max(ans, tot - help(i+j+1,max(m,j+1),v));
    }
    return dp[i][m] = ans;
}

int stoneGameII(vector<int> &piles)
{
    int sum = 0;
    memset(dp,-1,sizeof(dp));
    for(auto x :  piles)
        sum += x;
    int diff = help(0,1,piles);
    return (sum+diff)/2;
}

int main()
{

    return 0;
}