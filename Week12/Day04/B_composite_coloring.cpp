// Problem link: https://codeforces.com/problemset/problem/1332/B
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    vector<int> primes = {2,3, 5 ,7 ,11, 13, 17, 19, 23, 29, 31};
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), res(n);
        map<int, vector<int> > mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < primes.size(); j++)
            {
                if(a[i]%primes[j]==0)
                {
                    mp[primes[j]].push_back(i);
                    break;
                }
            }
            
        }
        cout << mp.size() << "\n";
        int c=1;
        for (map<int, vector<int> >::iterator it=mp.begin(); it!=mp.end(); it++)
        {
            for (int i = 0; i < it->second.size(); i++)
            {
                res[it->second[i]]=c;
            }
            c++;
        }
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}