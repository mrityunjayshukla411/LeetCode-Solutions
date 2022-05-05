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

int longestSubarray(vector<int>& nums) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        int n=nums.size();
        int i=0,j=0,zeros=0,prev_zero=0,ones=0;
        int ans=0;
        while (j<n){
            if (nums[j]==1) {
                ones++;
                j++;
            }
            else{
                zeros++;
                
                if (zeros>1) {
                    j++;
                    i=prev_zero+1;
                    zeros-=1;
                }
                else {
                    j++;
                }
                prev_zero=j-1;
            }
            if (zeros==1) ans=max(ans,j-i-1);
            else if (zeros==0) ans=max(ans,j-i);
        }
        if (zeros==1) ans=max(ans,j-i-1);
        else if (zeros==0) ans=max(ans,j-i);
        return (ones==n)?ans-1:ans;
    }

int main()
{

    return 0;
}