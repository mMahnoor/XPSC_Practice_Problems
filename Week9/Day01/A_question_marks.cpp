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
        int total=0, cntA=0, cntB=0, cntC=0, cntD=0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='A')
            {
                cntA++;
                if(cntA<=n) total++;
            }
            else if(s[i]=='B')
            {
                cntB++;
                if(cntB<=n) total++;
            }
            else if(s[i]=='C')
            {
                cntC++;
                if(cntC<=n) total++;
            }
            else if(s[i]=='D')
            {
                cntD++;
                if(cntD<=n) total++;
            }
        }
        cout << total << "\n";
    }
    return 0;
}