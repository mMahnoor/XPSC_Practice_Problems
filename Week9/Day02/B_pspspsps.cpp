// Problem link: https://codeforces.com/problemset/problem/2049/B
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cntS=0, cntP=0, foundP=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='p')
            {
                foundP=1;
            }
            if(foundP && s[i]=='s') cntS++; 
        }        
        if(foundP && cntS>0)
        {
            cout << "NO\n";
        }
        else 
        {
            cntS=0;
            for (int i = 1; i < n-1; i++)
            {
                if(s[i]=='p') cntP++;
                else if(s[i]=='s') cntS++;
            }
            if(cntP==0 || cntS==0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}