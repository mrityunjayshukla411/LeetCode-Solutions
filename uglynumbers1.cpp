#include <bits/stdc++.h>

using namespace std;

bool isUgly(int n)
{
    if (n<=5) return true;

    bool flag = true;
    while (n > 5)
    {
        if(n % 2 && n % 3 && n % 5)
        {
            flag = false;
        }
        if(n%2 == 0 ) n /= 2;
        if(n%3 == 0 ) n /= 3;
        if(n%5 == 0 ) n /= 5;
    }
    

    return flag;
    
}

int main()
{

    return 0;
}