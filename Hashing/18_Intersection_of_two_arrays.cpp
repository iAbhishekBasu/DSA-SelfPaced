#include <bits/stdc++.h>

using namespace std;

// BRUTE FORCE
vector <int> intersection(vector <int> arr,vector <int> arr1)
{
    int count = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		// Checking if the element is seen before
		bool flag = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				flag = true;
				break;
			}
		}

		// If the element is seen ignore
		if (flag == true)
		{
			continue;
		}

		// If not seen before, check if it exists in the 2nd array
		
		for (int j = 0; j < arr1.size(); j++)
		{
			if (arr[i] == arr1[j])
			{
				count++;
                break;
            }
		}
	}
    cout << count;
    return { };
}

// Hash Map
// vector <int> printFreq(vector <int> arr,vector <int> arr2)
//  {
// 	 unordered_set <int> s;

// 	 for (int i = 0; i < arr.size(); i++)
// 	 {
// 		 s.insert(arr[i]);
// 	 }

// 	 int count = 0;

// 	 for (int i = 0; i < arr2.size(); i++)
// 	 {
// 		 if (s.find(arr2[i]) != s.end())
// 		 {
// 			 count++;
// 			 s.erase(arr2[i]);
// 		 }
// 	}
// 	cout << count;
// 	return {};
//  }

 

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; cout.tie(NULL) ;

	vector<int> array =  { 1, 1, 3, 3, 10, 20, 20, 8, 8, 10, 12, 12, 14, 14, 15, 15 };
	vector<int> array2 = { 1, 1, 3, 3, 10, 20, 20, 8, 8, 10, 12, 12, 14, 14, 15, 15 };

	intersection(array, array2);
	return 0 ;

}