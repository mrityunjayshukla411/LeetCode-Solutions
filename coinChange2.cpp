#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long
#define ld long double
#define FOR(i, a, b, s) for (int i = (a); (s) > 0 ? i < (b) : i > (b); i += (s))
#define for1(e) FOR(i, 0, e, 1)
#define for2(i, e) FOR(i, 0, e, 1)
#define for3(b, e) FOR(i, b, e, 1)
#define for4(i, b, e) FOR(i, b, e, 1)
#define EACH(x, a) for (auto &x : a)
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pb push_back
#define ff first
#define ss second

int solve(vector<int> S, int m, int n, vector<vector<int>> &dp)
{
    if (m == 0)
    {
        if (n % S[0] == 0)
            return 1;
        else
            return 0;
    }

    if (dp[m][n] != -1)
        return dp[m][n];

    int notTake = solve(S, m - 1, n, dp);

    int take = 0;
    if (S[m] <= n)
        take = solve(S, m, n - S[m], dp);

    dp[m][n] = take + notTake;

    return take + notTake;
}
int change(int n, vector<int> &coins)
{
    int m = coins.size();

    vector<vector<int>> dp(m, vector<int>(n + 1, -1));

    return solve(coins, m - 1, n, dp);
}

int main()
{

    return 0;
}