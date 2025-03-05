#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), res(k+1), l(k+1), r(k+1);
        map<int, set<int> > mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]].insert(i);
        }
        int cnt=0;
        map<int, set<int> >::iterator it;
        int c=1;
        for (int i = 0; i < n; i++)
        {
            if(a[i]<c) cnt++;
            else
            {
                l[c]=cnt;
                c++;
                i--;
            }
        }
        cnt=0;
        c=1;
        for (int i = n-1; i >= 0; i--)
        {
            if(a[i]<c) cnt++;
            else
            {
                r[c]=cnt;
                c++;
                i++;
            }
        }
        for (int i = 1; i <= k; i++)
        {
            if(mp.find(i)!=mp.end())
            {
                res[i]=((n-r[i])-(l[i]+1)+1)*2;
            }
            else res[i]=0;
        }
        for (int i = 1; i <= k; i++)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}