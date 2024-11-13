// Problem link: https://codeforces.com/problemset/problem/1690/D
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;
        
        int i=0, j=0;
        int b=0, min_cnt=INT_MAX; 
        while(j<n)
        {
            if(s[j]=='B') b++;
            if(j-i+1==k)
            {
                int w = k-b;
                min_cnt=min(min_cnt, w);
                if(s[i]=='B') b-=1;
                i++;
            }
            j++;
        }
        cout << min_cnt << "\n";
    }
    return 0;
}