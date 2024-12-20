// Problem link: https://codeforces.com/problemset/problem/1974/D
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cntN=0, cntS=0, cntW=0, cntE=0;
        vector<int> idN, idS, idW, idE;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='N') 
            {
                cntN++;
                idN.push_back(i);
            }
            else if(s[i]=='S') 
            {
                cntS++;
                idS.push_back(i);
            }
            else if(s[i]=='W') 
            {
                cntW++;
                idW.push_back(i);
            }
            else 
            {
                cntE++;
                idE.push_back(i);
            }
        }
        int flag=1;
        if(s.size()==2 && s[0]!=s[1]) flag=0;
        else
        {
            if(!idN.empty() || !idS.empty())
            {
                int rem1=0, rem2=0;
                if(cntN<cntS)
                {
                    rem1=cntS-cntN;
                    if(rem1%2!=0) flag=0;
                }
                else
                {
                    rem2=cntN-cntS;
                    if(rem2%2!=0) flag=0;
                }
                if(flag)
                {
                    while (idN.size()>1)
                    {
                        s[idN.back()]='R';
                        idN.pop_back();
                        s[idN.back()]='H';
                        idN.pop_back();
                    }
                    while (idS.size()>1)
                    {
                        s[idS.back()]='R';
                        idS.pop_back();
                        s[idS.back()]='H';
                        idS.pop_back();
                    }
                    if(!idS.empty() && !idN.empty())
                    {
                        s[idS.back()]='H';
                        s[idN.back()]='H';
                    }
                }            
            }
            if(!idE.empty() || !idW.empty())
            {
                int rem1=0, rem2=0;
                if(cntW<cntE)
                {
                    rem1=cntE-cntW;
                    if(rem1%2!=0) flag=0;
                }
                else
                {
                    rem2=cntW-cntE;
                    if(rem2%2!=0) flag=0;
                }
                if(flag)
                {
                    while (idW.size()>1)
                    {
                        s[idW.back()]='R';
                        idW.pop_back();
                        s[idW.back()]='H';
                        idW.pop_back();
                    }
                    while (idE.size()>1)
                    {
                        s[idE.back()]='R';
                        idE.pop_back();
                        s[idE.back()]='H';
                        idE.pop_back();
                    }
                    if(!idE.empty() && !idW.empty())
                    {
                        s[idE.back()]='R';
                        s[idW.back()]='R';
                    }
                }
            }
        }
        if(flag)
        {
            for (int i = 0; i < n; i++)
            {
                cout << s[i];
            }
            cout << "\n";
        }
        else cout << "NO\n";
    }
    return 0;
}