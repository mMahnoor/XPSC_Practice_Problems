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
        long long zeros=0, zero_cnt=0, minOp=0, cnt=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0') zeros++;
        }
        int i=1, k=n-1;
        for (int i=1; i<=n; i++)
        {
            if(zeros<zero_cnt) 
            {
                cout << "-1 ";
            }
            else
            {
                if(s[k]=='0') 
                {
                    zero_cnt++;
                    minOp+=cnt;
                    k--;
                }
                else{
                    while(k>=0 && s[k]!='0') 
                    {
                        k--;
                        cnt++;
                    }
                    if(k>=0 && s[k]=='0') 
                    {
                        zero_cnt++;
                        minOp+=cnt;
                        k--;
                    }
                    else minOp=-1;
                }
                cout << minOp << " ";         
            }
        }
        cout << "\n";
    }
    return 0;
}