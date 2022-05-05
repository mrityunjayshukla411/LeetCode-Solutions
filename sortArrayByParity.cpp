#include <bits/stdc++.h>

using namespace std;

// static bool cmp(int a, int b)
// {
//     if(a%2 == 0 && b%2 == 0) return a < b;
//     if(a % 2 != 0 && b % 2 != 0) return b < a;

//     if(a % 2 == 0) return true;

//     return false;
// }

// vector<int> sortArrayByParity(vector<int> &v)
// {
//     sort(v.begin(),v.end(),cmp);
//     return v;
// }
vector<int> sortArrayByParity(vector<int> &v)
{
    int i = 0,j = 0;
    int n = v.size();
    for (i = 0; i < n; i++)
    {
        if(v[i] % 2 != 0)
        {
            break;
        }
    }
    for (j = i; j < n; j++)
    {
        if(v[j] % 2 == 0)
        {
            break;
        }
    }
    while (i < n && j < n)
    {
        if(v[i] % 2 != 0 && v[j] % 2 == 0)
        {
            swap(v[i],v[j]);
            i++;
        }
        j++;
        
    }
    return v;
    
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    v = sortArrayByParity(v);
    for(auto x : v)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}