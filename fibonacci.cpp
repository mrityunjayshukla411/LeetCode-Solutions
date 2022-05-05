#include <bits/stdc++.h>

using namespace std;

int fib(int n)
{
    if (n <=1)
    {
        return n;
    }
    int a = 0, b = 1;
    int i = 2;
    for (int i = 2; i <= n; i++)
    {
        b = a + b;
        a = b - a;
    }
    return b;
}

int main()
{
    cout<<fib(29)<<endl;
    return 0;
}