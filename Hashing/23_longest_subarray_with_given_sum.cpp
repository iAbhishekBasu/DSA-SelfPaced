#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE

// vector<int> subarrayGIVENsum(vector <int> array, int sum)
// {   
//     int max_length = 0;
//     for(int i = 0; i < array.size(); i++)
//     {   
//         int current_sum = 0;
//         for(int j = i; j < array.size(); j++)
//         {
//             current_sum+=array[j];
//             if(current_sum == sum)
//             {
//                 max_length = max(max_length,j-i+1);
//             }
//         }
//     }
//     cout << max_length;
//     return { };
// }

// Prefix sum and hashing 

vector<int> subarrayGIVENsum(vector <int> array,int sum)
{
    unordered_map<int, int> mp;
    int max_sum = 0,prefix_sum = 0;

    for (int i = 0; i < array.size(); i++)
    {
        prefix_sum += array[i];

        if(prefix_sum == sum)
        {
            max_sum = i + 1;
        }

        if(mp.find(prefix_sum) == mp.end())
        {
            mp.insert({prefix_sum,i});
        }

        if(mp.find(prefix_sum - sum) != mp.end())
        {
            max_sum = max(max_sum,i -mp[prefix_sum - sum] );
        }
    }
    cout << max_sum;
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

	vector<int> array =  {8, 8, 1, 1, 5, -6, 6, 2, 2 };
    int sum = 4;
	subarrayGIVENsum (array,sum);
	return 0 ;

}