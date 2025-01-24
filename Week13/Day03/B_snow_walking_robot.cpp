#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s, res;
        cin >> s;
        int cntL=0, cntR=0, cntU=0, cntD=0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='L') cntL++;
            if(s[i]=='R') cntR++;
            if(s[i]=='U') cntU++;
            if(s[i]=='D') cntD++;
        }
        if((cntL==0 || cntR==0) && (cntD==0 || cntU==0))
        {
            cout << "0\n";
            continue;
        }
        else if(cntL==0 || cntR==0)
        {
            res+="UD";
        } 
        else if(cntD==0 || cntU==0)
        {
            res+="LR";
        }
        else 
        {
            cntL=min(cntL, cntR);
            cntU=min(cntU, cntD);
            res.append(cntL, 'L');
            res.append(cntU, 'U');
            res.append(cntL, 'R');
            res.append(cntU, 'D');
        }
        cout << res.size() << "\n";
        cout << res << "\n";
    }
}