#include<bits/stdc++.h>

using namespace std;

vector<int> minOperations(string boxes) {
    int n =boxes.size();
    vector<int> res(n,0);
    vector<int> left(n,0);
    vector<int> right(n,0);
    int cnt = boxes[0] - '0';
    for (int i = 1; i < n; i++)
    {
        left[i] = left[i-1] + cnt;
        cnt += boxes[i] - '0';
    }
    cnt = boxes[n-1] - '0';
    for (int i = n-2; i >= 0; i--)
    {
        right[i] = right[i+1] + cnt;
        cnt += boxes[i] - '0';
    }
    cout<<"left:- "<<endl;
    for(auto x : left)
        cout<<x<<" ";
    cout<<endl;
    cout<<"right:- "<<endl;
    for(auto x : right)
        cout<<x<<" ";
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        res[i] = left[i] + right[i];
    }
    

    return res;
    
}

int main(){
    string s;
    cin>>s;
    vector<int> res = minOperations(s);
    for(auto x : res)
        cout<<x<<" ";
    return 0;
}