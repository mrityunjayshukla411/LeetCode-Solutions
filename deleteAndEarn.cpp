#include <bits/stdc++.h>

using namespace std;

long long dp[100010];
long long freq[100010];    
int deleteAndEarn(vector<int>& nums) {
    int maxn=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(maxn<nums[i]){
            maxn=nums[i];
        }
        freq[nums[i]]++;
    }
    cout<<maxn<<endl;
    dp[0]=0;
    dp[1]=freq[1];
    for(int i=2;i<=maxn;i++){
        dp[i]=max(i*freq[i]+dp[i-2],dp[i-1]);
    }
    return dp[maxn];
}

int main(){
    
    return 0;
}