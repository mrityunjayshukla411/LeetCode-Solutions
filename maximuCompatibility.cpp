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

vector<int> encode(vector<vector<int>> &a)
{
    vector<int> ret;

    for (auto &r : a)
    {
        int mask = 0;

        for (int i = 0; i < r.size(); i++)
        {
            if (r[i] == 1)
            {
                mask += 1 << i;
            }
        }

        ret.push_back(mask);
    }

    return ret;
}

int maxCompatibilitySum(vector<vector<int>> &students, vector<vector<int>> &mentors)
{
    int m = students.size(), n = students.front().size(), f[256] = {0};
    vector<int> x = encode(students), y = encode(mentors);

    for (int mask = 1; mask < (1 << m); mask++)
    {
        int c = __builtin_popcount(mask);

        for (int i = 0; i < m; i++)
        {
            if (mask & (1 << i))
            {
                f[mask] = max(f[mask], f[mask - (1 << i)] + n - __builtin_popcount(x[c - 1] ^ y[i]));
            }
        }
    }

    return f[(1 << m) - 1];
}

int main()
{

    return 0;
}