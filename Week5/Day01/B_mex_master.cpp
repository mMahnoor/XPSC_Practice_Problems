#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<int, int> a;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            a[val]++;
        }
        int mex_val=0;
        for(map<int, int>::iterator it=a.begin(); it!=a.end(); it++)
        {
            if(it->first==mex_val)
            {
                if(it->first==0)
                {
                    if(it->second-1<=n-it->second)
                        mex_val=it->first;
                    else{
                        mex_val+=1;
                    }
                }
                else{
                    if(a.size()==2) mex_val+=1;
                    else break;
                }
            }
            else
            {
                break;
            }
        }
        cout << mex_val << "\n";
    }
    return 0;
}