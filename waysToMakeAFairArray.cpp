#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long
#define ld long double
#define FOR(i, a, b, s) for (int i = (a); (s) > 0 ? i < (b) : i > (b); i += (s))
#define for1(e) FOR(i, 0, e, 1)
#define for2(i, e) FOR(i, 0, e, 1)
#define for3(b, e) FOR(i, b, e, 1)
#define for4(i, b, e) FOR(i, b, e, 1)
#define EACH(x, a) for (auto &x : a)
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pb push_back
#define ff first
#define ss second

int waysToMakeFair(vector<int>& nums) {
		if (nums.size() == 1) return 1;

		if (nums.size() == 2) return 0;

		long int prefixEven = 0;
		long int prefixOdd = 0;
		set<int> set;
		int result = 0;

		for (int i=1; i < nums.size(); i++){
			if (i % 2 == 1) prefixOdd += nums[i];

			else{
				prefixEven += nums[i];
			}

			if (set.find(nums[i]) == set.end()) set.insert(nums[i]);
		}

		if (prefixOdd == prefixEven){
			if (set.size() == 1) result++;
		}


		for (int i=1; i < nums.size(); i++){
			if (i == 1){
				long int temp = prefixEven;
				prefixEven = prefixOdd;
				prefixOdd = temp;

			}

			if (i > 1){
				if (i % 2 == 0){
					prefixEven -= nums[i-1];
					prefixEven += nums[i-2];
				}

				else{
					prefixOdd -= nums[i-1];
					prefixOdd += nums[i-2];
				}
			}

			if (prefixEven == prefixOdd) result++;
		}

		return result;
	}

int main()
{

    return 0;
}