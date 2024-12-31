#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<pair<long long, long long> > a(n);
    for (int i = 0; i < n; i++)
    {
        long long val;
        cin >> val;
        a[i]=make_pair(val, i+1);
    }
    sort(a.begin(), a.end());
    int m=-1, l=-1, p=-1;
    for (int i = 0; i < n-2; i++)
    {
        int j=i+1, k=n-1;
        while(j<k)
        {
            long long sum=a[i].first+a[j].first+a[k].first;
            if(sum==x) 
            {
                m=a[i].second;
                l=a[j].second;
                p=a[k].second;
                break;
            }
            else if(sum<x)
            {
                j++;
            }
            else k--;
        }
    }
    if(m==-1) cout << "IMPOSSIBLE\n";
    else cout << m << " " << l << " " << p << "\n";
    return 0;
}