#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1, j = n - 1, k = nums1.size() - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
            k--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
    while (i >= 0)
    {
        nums1[k] = nums1[i];
        k--;
        i--;
    }
    while (j >= 0)
    {
        nums1[k] = nums2[j];
        k--;
        j--;
    }
}

    int main()
    {
        vector<int> n1 = {1, 2, 3, 0, 0, 0};
        vector<int> n2 = {2, 5, 6};
        merge(n1, 6, n2, 3);
        for (auto x : n1)
            cout << x << " ";
        cout << endl;
        for (auto x : n2)
            cout << x << " ";
        return 0;
    }