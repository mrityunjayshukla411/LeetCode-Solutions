#include<bits/stdc++.h>

using namespace std;

void sortColors(vector<int> &nums) {
    int i,j = 0,k = 0;
    int n = nums.size();
    vector<int> cnt(3,0);
    for (int i = 0; i < n; i++)
    {
        if(nums[i] == 0) cnt[0]++;
        if(nums[i] == 1) cnt[1]++;
        if(nums[i] == 2) cnt[2]++;
    }
    for (int i = 0; i < cnt[0]; i++)
    {
        nums[i] = 0;
    }
    for (int i = cnt[0]; i < cnt[0]+cnt[1]; i++)
    {
        nums[i] = 1;
    }
    for (int i = cnt[0] + cnt[1]; i < cnt[0]+cnt[1]+cnt[2]; i++)
    {
        nums[i] = 2;
    }
    
        
    
    
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sortColors(v);
    for(auto x : v)
        cout<< x << " ";
    
    return 0;
}