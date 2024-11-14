// Problem link: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int p1=0, p2=0;
    int val = max(a[p1], b[p2]);
    while(p1<n || p2<m)
    {
        while (p1<n && a[p1]<val)
        {
            res.push_back(a[p1]);
            p1++;
        }
        while (p2<m && b[p2]<val)
        {
            res.push_back(b[p2]);
            p2++;
        }
        while (p1<n && a[p1]==val)
        {
            res.push_back(a[p1]);
            p1++;
        }
        while (p2<m && b[p2]==val)
        {
            res.push_back(b[p2]);
            p2++;
        }
        if(p1<n && p2<m) val=max(a[p1],b[p2]);
        else
        {
            if(p1>=n) val=b[m-1];
            else val=a[n-1];
        }
        
    }

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}