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
        string s, f;
        cin >> s;
        cin >> f;
        long long s_ones=0, f_ones=0, cntOp=0, notEql=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]!=f[i])
            {
                notEql++;
                if(s[i]=='1') s_ones++;
                if(f[i]=='1') f_ones++;
            }
        }
        if(s_ones>f_ones) 
        {
            cntOp += (s_ones-f_ones);
            notEql-=(s_ones-f_ones);
            cntOp+=notEql/2;
        }
        else if(s_ones<f_ones)
        {
            cntOp += (f_ones-s_ones);
            notEql-=(f_ones-s_ones);
            cntOp+=notEql/2;
        }
        else cntOp+=notEql/2;
        cout << cntOp << "\n";
    }
    return 0;
}