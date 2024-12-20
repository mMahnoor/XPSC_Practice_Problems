// Problem link: https://codeforces.com/problemset/problem/1839/C
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), res;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(a[n-1]!=1)
        {
            cout << "YES\n";
            for (int i = n-1; i >= 0; i--)
            {
                int id=0;
                if(a[i]==1)
                {
                    if(!res.empty() && res.back()==0) res.pop_back();
                    while(i>=0 && a[i]==1)
                    {
                        res.push_back(0);
                        id++;
                        i--;
                    }
                    res.push_back(id);
                    res.push_back(0);
                }
                else res.push_back(0);
            }
        
            for (int i = 0; i < n; i++)
            {
                cout << res[i] << " ";
            }
            cout << "\n";
        }
        else cout << "NO\n";
    }
    return 0;
}