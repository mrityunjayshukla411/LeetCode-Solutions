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

int minCost(string s, vector<int> &neededTime)
{
    int n = s.length();
    vector<int> dp(n);
    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            dp[i] = dp[i - 1] + min(neededTime[i], neededTime[i - 1]);
            if (neededTime[i] < neededTime[i - 1])
            {
                neededTime[i] = neededTime[i - 1];
            }
        }
        else
        {
            dp[i] = dp[i - 1];
        }
    }

    return dp[n - 1];
}

int main()
{

    return 0;
}