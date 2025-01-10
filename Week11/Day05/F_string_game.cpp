// Problem link: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool target(int mid, string t, string p, int a[])
{
    int n=t.size(), k=p.size(), j=0;
    vector<int> v(n);
    for (int i = 0; i <= mid; i++)
    {
        v[a[i]-1]=1;
    }
    for (int i = 0; i < n; i++)
    {
        if(v[i]==0)
        {
            if(p[j]==t[i]) j++;
        }
        if(j==k) return true;
    }
    return false;
}

int main()
{
    string t, p;
    cin >> t;
    cin >> p;
    int n=t.size();
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int i = 0, j = n-1, mid, res=0;
    while (i <= j) {
        mid = i+(j-i)/2;
        if (target(mid, t, p, a)) 
        {
            res = mid+1;
            i = mid+1;
        }
        else 
        {
            j = mid-1;
        }
    }       
    cout << res << "\n";
    return 0;
}