#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/contiguous-array/submissions/

// BRUTE FORCE

// vector<int> subarray0or1(vector <int> array)
// {   
//     int result = 0;
//     for(int i = 0; i < array.size(); i++)
//     {
//         int a0 = 0, a1 = 0;
//         for(int j = i; j < array.size(); j++)
//         {
//             if(array[j] == 0)
//             {
//                 a0++;
//             }
//             else
//             {
//                 a1++;
//             }
//             if(a0 == a1)
//             {
//                 result = max(result,j-i+1);
//             }
//         }
//     }
//     cout << result;
//     return { };
// }

// Prefix sum and hashing 

vector<int> subarray0or1s(vector <int> array)
{
    unordered_map<int,int> mp;
    int max_sum = 0, prefix_sum = 0;

    for(int i = 0; i < array.size(); i++)
    {
         if(array[i] == 0)
         {
             array[i] = -1;
         }
    }

    for(int i = 0; i < array.size(); i++)
    {
        prefix_sum += array[i];

        if(prefix_sum == 0)
        {
            max_sum = i + 1;
        }

        if(mp.find(prefix_sum) == mp.end())
        {
            mp[prefix_sum] = i;
        }

        if(mp.find(prefix_sum) != mp.end())
        {
            max_sum = max(max_sum,i -mp[prefix_sum]);
        }
    }
    cout << max_sum;
    return { };
}


int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; cout.tie(NULL) ;

	vector<int> array =  { 1,0,1,1,1,0,0 };

	subarray0or1s(array);
	return 0 ;

}