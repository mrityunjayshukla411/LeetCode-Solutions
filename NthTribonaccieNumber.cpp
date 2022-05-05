#include <bits/stdc++.h>

using namespace std;
int tribonacci(int n)
{
    if (n <=1)  return n;
    if(n == 2) return 1;
    int a0 = 0;
    int a1 = 1;
    int a2 = 1;
    int res = 0;
    for (int i = 3; i <= n; i++)
    {
        res = a0 + a1 + a2;
        a0 = a1;
        a1 = a2;
        a2 = res;
    }
    return res;
    
}


int main()
{
    cout << tribonacci(4) << endl;
    return 0;
}