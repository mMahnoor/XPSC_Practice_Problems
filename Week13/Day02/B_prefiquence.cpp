// Problem link: https://codeforces.com/problemset/problem/1968/B
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a;
        cin >> b;
        int i=0, j=0, cnt=0;
        while(j<m)
        {
            if(a[i]==b[j])
            {
                i++;
                j++;
                cnt++;
            }
            else j++;
        }
        cout << cnt << "\n";
    }
    return 0;
}