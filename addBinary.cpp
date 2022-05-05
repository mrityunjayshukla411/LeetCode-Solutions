#include <bits/stdc++.h>

using namespace std;

string addBinary(string a, string b)
{
    string res = "";
    int lena = a.size();
    int lenb = b.size();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int sum, carry = 0;
    for (int i = 0; i < lena || i < lenb; i++)
    {
        sum = carry;
        if (i < lena)
            sum += a[i] - '0';
        if (i < lenb)
            sum += b[i] - '0';

        if (sum == 0)
            carry = 0, res += '0';
        else if (sum == 1)
        {
            carry = 0;
            res += '1';
        }
        else if (sum == 2)
        {
            carry = 1;
            res += '0';
        }
        // else
        // {
        //     carry = 1, res += '1';
        // }
    }
    

    if (carry)
        res += '1';
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    string a, b;
    cin >> a >> b;
    cout << addBinary(a, b);
    return 0;
}