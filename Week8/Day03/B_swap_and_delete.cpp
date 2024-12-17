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
        int cnt_ones=0, cnt_zeros=0, minC=0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='1') cnt_ones++;
            else cnt_zeros++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='1') 
            {
                if(cnt_zeros==0)
                {
                    minC=(s.size()-i);
                    break;
                }
                cnt_zeros--;
            }
            else 
            {
                if(cnt_ones==0)
                {
                    minC=(s.size()-i);
                    break;
                }
                cnt_ones--;
            }
        }
        cout << minC << "\n";
    }
    return 0;
}