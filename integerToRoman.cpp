#include <bits/stdc++.h>

using namespace std;

string intToRoman(int num)
{
    string res;
    map<int, string, greater<int>> m;
    m[1] = "I";
    m[4] = "IV";
    m[5] = "V";
    m[9] = "IX";
    m[10] = "X";
    m[40] = "XL";
    m[50] = "L";
    m[90] = "XC";
    m[100] = "C";
    m[400] = "CD";
    m[500] = "D";
    m[900] = "CM";
    m[1000] = "M";
    for (auto it : m)
        while (num >= it.first)
        {
            res += it.second;
            num -= it.first;
        }

    return res;
}

int main()
{
    int num;
    cin >> num;
    cout << intToRoman(num) << endl;
    return 0;
}