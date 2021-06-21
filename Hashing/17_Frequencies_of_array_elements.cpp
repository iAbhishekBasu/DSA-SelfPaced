#include <bits/stdc++.h>

using namespace std;

// BRUTE FORCE
// vector <int> printFreq(vector <int> arr)
// {
// 	for (int i = 0; i < arr.size(); i++)
// 	{
// 		// Checking if the element is seen before
// 		bool flag = false;
// 		for (int j = 0; j < i; j++)
// 		{
// 			if (arr[i] == arr[j])
// 			{
// 				flag = true;
// 				break;
// 			}
// 		}

// 		// If the element is seen ignore
// 		if (flag == true)
// 		{
// 			continue;
// 		}

// 		// If not seen before, count the frequency
// 		int frequency = 1;
// 		for (int j = i + 1; j < arr.size(); j++)
// 		{
// 			if (arr[i] == arr[j])
// 			{
// 				frequency++;
// 			}
// 		}
// 		cout << arr[i] << " " << frequency << endl;
// 	}
// 	return {};
// }

// Hash Map
vector <int> printFreq(vector <int> arr)
 {
	 unordered_map <int,int> FreqMap;

	 for (int i = 0; i < arr.size(); i++)
	 {
		 FreqMap[arr[i]]++;
	 }

	 for(auto x : FreqMap)
	 {
		 cout << x.first << " " << x.second << endl;
	 }
	 return {};
 }

 

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; cout.tie(NULL) ;

	vector<int> array = { 1, 1, 3, 3, 10, 20, 20, 8, 8, 10, 12, 12, 14, 14, 15, 15 };
	

	printFreq(array);

	return 0 ;

}