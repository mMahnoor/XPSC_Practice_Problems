// Problem link: https://codeforces.com/problemset/problem/1840/C
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i=0;
        vector<long long int> v;
        while(i<n)
        {            
            if(a[i]<=q)
            {
                long long int cnt=0;
                while(i<n && a[i]<=q)
                {
                    cnt++;
                    i++;
                }
                if(cnt>=k) v.push_back(cnt);
            }
            else i++;
        }
        long long int max_ways=0;
        for (int i = 0; i < v.size(); i++)
        {
            max_ways+=(((v[i]-k+1)*(v[i]-k+2))/2);
        }
        cout << max_ways << "\n";
    }
    return 0;
}