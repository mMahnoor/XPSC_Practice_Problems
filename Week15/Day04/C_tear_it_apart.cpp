// Problem link : https://codeforces.com/problemset/problem/1821/C
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        string s;
        cin >> s;
        int minOp=s.size();
        set<char> alpha;
        for (int i = 0; i < s.size(); i++)
        {
            alpha.insert(s[i]);
        }
        
        for (set<char> :: iterator it=alpha.begin(); it!=alpha.end(); it++)
        {
            int b = 0, maxB=0;;
            for (int j = 0; j < s.size(); j++)
            {
                if(s[j]==*it)
                {
                    maxB = max(maxB, b);
                    b=0;
                }
                else b++;
            }
            if(b)
            {
                maxB = max(maxB, b);
            }
            if(maxB<=1) minOp=maxB;
            else 
            {
                int cnt=0;
                while(maxB>=1)
                {
                    maxB /= 2;
                    cnt++;
                }
                minOp = min(minOp, cnt);
            }
        }
        cout << minOp << "\n";
    }
    return 0;
}