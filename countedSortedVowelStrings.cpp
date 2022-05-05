#include <bits/stdc++.h>

using namespace std;

int countVowelStrings(int n)
{
    vector<int> dp(5, 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < 5; j++)
            dp[j] = dp[j] + dp[j - 1];
    }
    return dp[4];
}

int main()
{
    int n;
    cin>>n;
    cout<<countVowelStrings(n);
    return 0;
}