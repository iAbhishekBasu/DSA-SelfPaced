#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE
// vector<int> printsum(vector <int> array,int n)
// {
//     bool flag = false;
//     for(int i = 0; i < array.size(); i++)
//     {
//         for(int j = i + 1; j < array.size(); j++)
//         {
//             if(array[i] + array[j] == n)
//             {
//                 flag = true;
//             }
//         }
//     }
//     if(flag == true)
//     {
//         cout << "yes" << endl;
//     }
//     else
//     {
//         cout << "no" << endl;
//     }
//     return { };
// }

// Hash Set

vector<int> printsum(vector <int> array,int n)
{
    unordered_set <int> s;
    bool flag = false;
    for (int i = 0; i < array.size(); i++)
    {
       if(s.find(n-array[i]) != s.end() )
       {
           flag = true;
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

	vector<int> array =  { 1, 1, 3, 3, 10, 20, 20, 8, 8, 10, 11, 12, 14, 14, 15, 15 };
	int sum =  1;

	printsum(array,sum);
	return 0 ;

}