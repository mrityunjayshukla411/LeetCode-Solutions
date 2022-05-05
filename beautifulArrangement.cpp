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

int cnt = 0;
void permute(vector<int> &v, int l)
{
    if (l == v.size())
    {
        cnt++;
    }
    for (int i = l; i < v.size(); i++)
    {
        swap(v[i], v[l]);
        if (v[l] % (l + 1) == 0 || (l + 1) % v[l] == 0)
            permute(v, l + 1);
        swap(v[i], v[l]);
    }
}

int countArrangement(int n)
{
    vector<int> v(n);
    for (int i = 1; i < n + 1; i++)
    {
        v[i - 1] = i;
    }
    permute(v, 0);
    return cnt;
}

int main()
{

    return 0;
}