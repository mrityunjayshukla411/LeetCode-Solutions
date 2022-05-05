#include <bits/stdc++.h>

using namespace std;

int Add(int x, int y)
{
    unsigned carry = 0;
    while (y != 0)
    {
        carry = x & y;

        x = x ^ y;

        y = carry << 1;
        cout<<"x:- "<<x<<endl;
        cout<<"y:- "<<y<<endl;
        cout<<"carry:- "<<carry<<endl;

    }
    return x;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout<<Add(a,b);
    return 0;
}