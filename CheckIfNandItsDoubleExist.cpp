#include <bits/stdc++.h>

using namespace std;

bool checkIfExist(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (binary_search(arr.begin(), arr.end(), 2 * arr[i]) && arr[i] != 0)
        {
            // cout<<arr[i]<<endl;
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (checkIfExist(arr))
    {
        cout << "Hello" << endl;
    }
    else
    {
        cout << "Bye" << endl;
    }

    return 0;
}