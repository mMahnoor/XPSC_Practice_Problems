#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, d, k;
        cin >> n >> d >> k;
        vector<pair<int, int> > v(n);
        while(k--)
        {
            int l, r;
            cin >> l >> r;
            v[l-1].first++;
            v[r-1].second++;
        }
        vector<int> res;
        int i=0, j=0, cnt=0, minS=INT_MAX, maxS=INT_MIN;
        while(j<n)
        {
            if(j-i+1==d)
            {
                res.push_back(cnt);
                minS=min(minS, cnt);
                maxS=max(maxS, cnt);
                cnt-=v[i].second;
                i++;
                cnt+=v[++j].first;
            }
            else cnt+=v[j++].first;
        }
        for (int i = 0; i < res.size(); i++)
        {
            if(res[i]==maxS) 
            {
                cout << i+1 << " ";
                break;
            }
        }
        for (int i = 0; i < res.size(); i++)
        {
            if(res[i]==minS) 
            {
                cout << i+1 << "\n";
                break;
            }
        }
    }
    return 0;
}