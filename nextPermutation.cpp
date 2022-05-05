#include<bits/stdc++.h>

using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
        int i = n-2;
        while (i >=0 && nums[i+1] <= nums[i])
        {
            i--;
        }
            int j = n-1;
            
        if(i >= 0)
        {
            while (nums[j] <= nums[i])
            {
                j--;
            }
            swap(nums[i],nums[j]);
        }
            reverse(nums.begin()+i+1,nums.end());
            // cout<<"i:- "<<i<<"j;- "<<j<<endl;
        
        
        
    }

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    nextPermutation(v);
    for(auto x: v)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}