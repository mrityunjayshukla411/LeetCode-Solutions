#include <bits/stdc++.h>

using namespace std;

int divide(int dividend, int divisor)
{
    //System.out.println(Integer.MIN_VALUE - 1);
    //System.out.println(Integer.MAX_VALUE);
    if (dividend == INT_MIN && divisor == -1)
    {
        return INT_MAX;
    }
    int a = abs(dividend);
    int b = abs(divisor);
    int res = 0;
    while (a - b >= 0)
    {

        int x = 0;
        while (a - (b << 1 << x) >= 0)
        {
            x++;
        }
        res += 1 << x;
        a -= b << x;
    }
    return (dividend >= 0) == (divisor >= 0) ? res : -res;
}

int main()
{
    int dividend, divisor;
    cin >> dividend >> divisor;
    cout << divide(dividend, divisor);
    return 0;
}