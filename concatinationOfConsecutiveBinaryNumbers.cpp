#include <bits/stdc++.h>

using namespace std;

long modus = 1000000007;

int concatenatedBinary(int n)
{
    long long int currentShift = 0;
    int currentNum = 1;
    while (currentNum <= n)
    {
        currentShift = ((currentShift << (1+ int(log2(currentNum))))%modus + currentNum)%modus;
        cout<<"current:- "<<currentShift<<endl;
        currentNum++;

    }
    return currentShift;
    
}

 int concatenatedBinary(int n) {
        long long modulo = pow(10,9) + 7;
        long long current =1;
        for(int i=2; i<n+1; i++){
            long long num_of_bits = (log2(i)) +1;
            current = current<<num_of_bits;
            current = (current | i)%modulo;
            
        }
        return current % modulo;
    }

int main()
{
    int n;
    cin >> n;
    cout << concatenatedBinary(n);
    return 0;
}