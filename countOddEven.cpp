#include <bits/stdc++.h>

using namespace std;

void countOddEven(int arr[], int sizeof_array)
{
    long odd = 0;
    for (int i = 0; i < sizeof_array; i++)
    {
        if (arr[i] % 2)
        {
            odd++;
        }
        
    }
    cout<<odd<<" "<<sizeof_array-odd<<endl;
    
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    countOddEven(arr,5);
    return 0;
}