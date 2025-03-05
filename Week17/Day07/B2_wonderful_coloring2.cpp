#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), res(n);
        map<int, vector<int> > mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]].push_back(i);
        }
        map<int, vector<int> >::iterator it;
        int cnt=0;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second.size()>=k)
            {
                int m=1, i=0;
                while(i<it->second.size())
                {
                    if(m<=k)
                    {
                        res[it->second[i++]] = m;
                        m++;
                    }
                    else res[it->second[i++]] = 0;
                }
            }
            else
            {
                cnt += it->second.size();
            }
        }
        cnt -= cnt%k;
        int m=1;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second.size()<k)
            {
                int i=0;
                if(cnt>0)
                {
                    while(i<it->second.size())
                    {
                        if(m<=k && cnt>0)
                        {
                            res[it->second[i++]] = m;
                            m++;
                            cnt--;
                        }
                        if(m>k) m=1;
                        if(cnt==0) break;
                    }
                    if(m>k) m=1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}