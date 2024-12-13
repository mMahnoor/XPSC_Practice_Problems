// Problem link: https://codeforces.com/problemset/problem/1867/B
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s;
        int cnt=0;
        for (int i = 0, j=n-1; i < j; i++, j--)
        {
            if(s[i]!=s[j]) cnt++;
        }
        for (int i = 0; i <= n; i++)
        {
            if(i>=cnt)
            {
                if(n%2==0)
                {
                    if((i-cnt)<=(n-(2*cnt)))
                    {
                        if((i-cnt)%2==0) t+="1";
                        else t+="0";
                    }
                    else t+="0";
                }
                else{
                    if((i-cnt)<=(n-(2*cnt))) t+="1";
                    else t+="0";
                }
                
            }
            else t+="0";
            
        }
        cout << t << "\n";
    }
    return 0;
}