#include <bits/stdc++.h>

using namespace std;

vector<int> countBits(int n)
{
    vector<int> res(n+1,0);
    int i = 0, b = 1;
    while (b <= n)
    {
        while (i < b && i+b <= n)
        {
            res[b+i] = res[i] +1;
            i++;
        }
        i = 0;
        b = b << 1;
        
    }
    return res;
}

int main()
{
    vector<int> res = countBits(5);
    for(auto x : res)
        cout<<x<<" ";
    return 0;
}