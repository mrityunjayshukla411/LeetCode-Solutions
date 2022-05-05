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

int countSubstrings(string s)
{
    int n = s.length();
    int dp[n][n];
    memset(dp, 0, sizeof(dp));
    int count = 0;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0, j = k; j < n; i++,j++)
        {
            if (k == 0)
            {
                if (s[i] == s[j])
                {
                    dp[i][j] = 1;
                    count++;
                }
            }
            if (k == 1)
            {
                if (s[i] == s[j])
                {
                    dp[i][j] = 1;
                    count++;
                }
            }
            if (k > 1)
            {
                if (s[i] == s[j] && dp[i + 1][j - 1] == 1)
                {
                    dp[i][j] = 1;
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{

    return 0;
}