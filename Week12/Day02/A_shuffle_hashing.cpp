// Problem link: https://codeforces.com/problemset/problem/1278/A
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string p, h;
        cin >> p;
        cin >> h;
        sort(p.begin(), p.end());
        int i=0, fl=0, k=p.size();
        while(i+p.size()<=h.size())
        {
            string tmp=h.substr(i, k);
            sort(tmp.begin(), tmp.end());
            if(tmp==p) fl=1;
            i++;
        }
        if(fl) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}