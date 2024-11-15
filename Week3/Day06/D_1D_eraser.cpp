// Problem link: https://codeforces.com/contest/1873/problem/D
#include <iostream>
#include <string>
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
        
        int i=0, min_op=0;
        while(i<n)
        {
            if(s[i]=='B')
            {
                int j=0;
                min_op++;
                while(j<k)
                {
                    if(s[i]=='B') s[i]='W';
                    i++;
                    j++;
                }
            }
            else i++;
        }
        cout << min_op << "\n";
    }
    return 0;
}