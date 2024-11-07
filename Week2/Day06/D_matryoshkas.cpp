// Problem link: https://codeforces.com/problemset/problem/1790/D
#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--) 
    {
        int n;
        cin >> n;
        
        map<int, int>::iterator it, temp;
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            mp[val]++;
        }
        int set_cnt=mp.begin()->second;
        int prev_val = mp.begin()->first;
        int prev_freq=mp.begin()->second;
        it = mp.begin();
        it++;
        while(it != mp.end())
        {
            if(it->first-prev_val!=1)
            {
                set_cnt+=it->second;
            }
            else
            {
                if(prev_freq<it->second)
                {
                    set_cnt+=it->second-prev_freq;
                }
            }
            prev_val=it->first;
            prev_freq=it->second;
            it++;
        }
        
        cout << set_cnt << "\n";
        
    }
    return 0;
}