// Problem link: https://codeforces.com/problemset/problem/1881/D
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, flag=1;
        cin >> n;
        vector<int> a(n);
        map<int, int> mp;
        map<int, int>::iterator it;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 2; j*j<=a[i]; j++) {
                while(a[i]%j==0)
                {
                    mp[j]++;
                    a[i] /= j;
                }
            }
            if(a[i]>1)
            {
                mp[a[i]]++;
            }
        }
        for (it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second%n!=0) 
            {
                flag=0; 
                break;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}