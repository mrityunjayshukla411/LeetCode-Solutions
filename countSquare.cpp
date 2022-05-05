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
int countSquares(vector<vector<int>> &matrix)
{
    int res = 0;
    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] > 0)
            {
                matrix[i][j] = 1 + min({matrix[i - 1][j - 1], matrix[i - 1][j], matrix[i][j - 1]});
            }
            res += matrix[i][j];
        }
    }
    for (int i = 0; i < matrix.size(); i++)
        res += matrix[i][0]; // 1 lenth square matrix first column
    for (int i = 0; i < matrix[0].size(); i++)
        res += matrix[0][i]; // 1 lenth square matrix first row
    if (matrix[0][0] == 1)
        res -= 1; // [0][0] will be counted twice;
    return res;
}
int main()
{

    return 0;
}