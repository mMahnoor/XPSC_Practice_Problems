// Problem link: https://codeforces.com/problemset/problem/1337/B
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, n, m;
        cin >> x >> n >> m;
        while(n>0)
        {
            n--;
            if(x<=0) break;
            if(x/2+10>=x) break;
            x = x/2+10;
        }
        if(m*10>=x) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}