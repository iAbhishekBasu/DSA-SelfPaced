#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE

// vector<int> subarrayGIVENsum(vector <int> array, int sum)
// {    
//     bool flag = false;
//     for(int i = 0; i < array.size(); i++)
//     {   
//         int current_sum = 0;
//         for(int j = i; j < array.size(); j++)
//         {
//             current_sum+=array[j];
//             if(current_sum == sum)
//             {
//                 flag = true;
//             }
//         }
//     }
//     if(flag == true)
//     {
//         cout << "yes";
//     }
//     else
//     {
//         cout << "no";
//     }
//     return { };
// }

// Prefix sum and hashing 

vector<int> subarrayGIVENsum(vector <int> array,int sum)
{
   bool flag = false;
   unordered_set<int> s;
   int current_sum = 0;
   for(int i = 0; i < array.size(); i++)
    {
        current_sum+= array[i];
        if(s.find(current_sum - sum)!= s.end())
        {
            flag = true;
            break;
        }
        if(current_sum == sum)
        {
            flag = true;
            break;
        }
        s.insert(current_sum);
    }
    if(flag == true)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
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

	vector<int> array =  { -3,-2,1 };
    int sum = 0;
	subarrayGIVENsum (array,sum);
	return 0 ;

}