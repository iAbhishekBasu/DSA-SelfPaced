#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE

// vector<int> subarray0sum(vector <int> array)
// {
//     bool flag = false;
//     for(int i = 0; i < array.size(); i++)
//     {   
//         int sub_array = 0;
//         for(int j = i; j < array.size(); j++)
//         {
//             sub_array += array[j];
//             if(sub_array == 0)
//             {
//                 flag =  true;
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

vector<int> subarray0sum(vector <int> array)
{
    bool flag = false;
    unordered_set <int> s;
    int sub_array = 0;
    for(int i = 0; i < array.size(); i++)
    {   
        sub_array += array[i];
        if(s.find(sub_array) != s.end())
        {
            flag = true;
            break;
        }
        if(sub_array == 0)
        {
            flag = true;
            break;
        }
        s.insert(array[i]);   
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

	vector<int> array =  { -3,2,1,6,7,8,9,10 };

	subarray0sum(array);
	return 0 ;

}