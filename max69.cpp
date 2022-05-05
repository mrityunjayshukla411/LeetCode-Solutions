#include <bits/stdc++.h>

using namespace std;

int maximum69Number(int num)
{
    string s = to_string(num);
    // cout<<s<<endl;
    int n = s.length();
    for (int i = 0; i < n ; i++)
    {
        if (s[i] == '6')
        {
            s[i] = '9';
            break;
        }
        
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res += (s[i]-'0')*pow(10,n-i-1);
    }
    
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << maximum69Number(n)<<endl; 
    return 0;
}