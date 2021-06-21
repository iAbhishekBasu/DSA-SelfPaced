#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE

vector <int> UNION(vector <int> arr,vector <int> arr1)
{
    int count = 0;
	vector<int> arr3;

	for (int i = 0; i < arr.size(); i++)
	{
		arr3.push_back(arr[i]);
	}

	for (int i = 0; i < arr1.size(); i++)
	{
		arr3.push_back(arr1[i]);
	}

	for (int i = 0; i < arr3.size(); i++)
	{
		// Checking if the element is seen before
		bool flag = false;
		for (int j = 0; j < i; j++)
		{
			if (arr3[i] == arr3[j])
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

		// If not seen before, increment
		else
		{
			count++;
		}
	}
    cout << count;
    return { };
}

// Hash Map

// vector <int> UNION(vector <int> arr,vector <int> arr2)
//  {
// 	 unordered_set <int> s;

// 	 for (int i = 0; i < arr.size(); i++)
// 	 {
// 		 s.insert(arr[i]);
// 	 }

// 	 int count = 0;

// 	 for (int i = 0; i < arr2.size(); i++)
// 	 {
// 		 s.insert(arr2[i]);
// 	 }
// 	cout << s.size();

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
	vector<int> array2 = { 16, 17, 3, 3, 10, 20, 20, 8, 8, 10, 12, 12, 14, 14, 15, 15 };

	UNION(array, array2);
	return 0 ;

}