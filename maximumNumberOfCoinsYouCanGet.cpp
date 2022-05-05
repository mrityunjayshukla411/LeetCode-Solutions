#include<bits/stdc++.h>

using namespace std;

int maxCoins(vector<int>& v) {
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int n = v.size()/3;
        int i = 1;
        int res = 0;
        while (n--)
        {
            res += v[i];
            i += 2;
        }
        
        return res;
    }

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    cout<<maxCoins(v)<<endl;
    
    return 0;
}