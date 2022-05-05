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

int stoneGameVII(vector<int> &stones)
{
    int totalSum = 0;
    int aliceScore = 0;
    int bobScore = 0;
    int n = stones.size();
    for(auto x : stones)
        totalSum += x;
    int start = 0,end=n-1;
    for(int i = 0 ; i <n ; i++)
    {
        cout<<aliceScore<<endl;
        cout<<bobScore<<endl;
        cout<<totalSum<<endl;
        
        if(i%2 == 0)
        {
            aliceScore += totalSum - min(stones[start],stones[end]);
            totalSum = totalSum - min(stones[start],stones[end]);
            if(stones[start] < stones[end]) start++;
            else end--;
            
        }
        else
        {
            bobScore += totalSum - max(stones[start],stones[end]);
            totalSum = totalSum - max(stones[start],stones[end]);
            if(stones[start] > stones[end]) start++;
            else end--;

        }
    }
    return aliceScore - bobScore;
}
int main()
{

    return 0;
}