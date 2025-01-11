// Problem link: https://codeforces.com/problemset/problem/1928/B
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        set<int> st;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if(st.empty()) 
            {
                st.insert(val);
                a.push_back(val);
            }
            else if(st.find(val)==st.end())
            {
                st.insert(val);
                a.push_back(val);
            }
        }
        sort(a.begin(), a.end());
        long long maxC=0, k=n-1;
        for (int i=0; i<a.size(); i++)
        {
            long long x=a[i]+k;
            long long y = upper_bound(a.begin(), a.end(), x)-a.begin();
            maxC=max(maxC, y-i);
        }
        cout << maxC << "\n";
    }
    return 0;
}