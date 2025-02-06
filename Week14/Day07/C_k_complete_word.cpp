// Problem link: https://codeforces.com/problemset/problem/1332/C
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> v(k);
        for (int i = 0; i < k/2; i++)
        {
            map<int, int> mp;
            int maxP=0, m=n/k, l=1, r=0;
            while(m--)
            {
                int p=(r*k)+(i+1), q=(l*k)-(i+1)+1;
                mp[s[p-1]]++;
                mp[s[q-1]]++;
                r++;
                l++;
                maxP=max(maxP, mp[s[p-1]]);
                maxP=max(maxP, mp[s[q-1]]);
            }
            v[i]=((n/k)*2)-maxP;
        }
        // cout << "bug\n";
        long long cnt=0;
        for (int i = 0; i < k; i++)
        {
            cnt+=v[i];
        }
        if(k%2!=0)
        {
            map<int, int> mp;
            int x=0, maxV=0;
            int m=n/k;
            while(m--)
            {
                int c=x*k;
                mp[s[c+(k/2)]]++;
                maxV=max(maxV, mp[s[c+(k/2)]]);
                x++;
            }
            cnt+=((n/k)-maxV);
        }
        cout << cnt << "\n";
        
    }
    return 0;
}