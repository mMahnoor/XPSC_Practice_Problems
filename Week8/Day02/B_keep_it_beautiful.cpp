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
        int q, flag=0;
        cin >> q;
        vector<int> v;
        string res;
        while(q--)
        {
            int x;
            cin >> x;
            if(v.empty())
            {
                v.push_back(x);
                res+='1';
            }
            else
            {
                if(flag==0)
                {
                    if(x>=v.back())
                    {
                        v.push_back(x);
                        res+='1';
                    }
                    else if(x<=v.front())
                    {
                        flag=1;
                        v.push_back(x);
                        res+='1';
                    }
                    else res+='0';
                }
                else{
                    if(x<=v.front() && x>=v.back())
                    {
                        v.push_back(x);
                        res+='1';
                    }
                    else
                    {
                        res+='0';
                    }
                }            
            }
        }
        cout << res << "\n";
    }
    return 0;
}