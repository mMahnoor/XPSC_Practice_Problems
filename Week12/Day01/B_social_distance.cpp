// Problem link: https://codeforces.com/problemset/problem/1668/B
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(n>m) cout << "NO\n";
        else{
            sort(a.begin(), a.end(), greater<int>());
            int pos=(2*a[0])+1, flag=1;
            for (int i = 1; i < n-1; i++)
            {
                if(pos>m)
                {
                    flag=0;
                }
                pos+=a[i]+1;
            }
            pos++;
            if(pos>m)
            {
                flag=0;
            }
            if(flag) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}