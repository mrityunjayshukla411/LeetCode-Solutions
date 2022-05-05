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
#define EACH(x, a) for (auto& x : a)
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pb push_back
#define ff first
#define ss second

int evaluatePostfix(string S)
{
    int res = 0;
    stack<int> st;
    for(auto x : S)
    {
        if(x - '0' >= 0 && x -'0' <=9)
        {
            st.push(x-'0');
        }
        else
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if(x=='+') res += a + b;
            else if(x=='-') res += a - b;
            else if(x=='*') res += a * b;
            else if(x=='/') res += a / b;
        }
    }
    return res;
}

int main(){
    
    return 0;
}