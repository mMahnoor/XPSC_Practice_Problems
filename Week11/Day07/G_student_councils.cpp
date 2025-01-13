// Problem link: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/G
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool target(long long mid, vector<long long> a, long long k)
{
    long long have=0, t=mid*k;
    for (int i = 0; i < a.size(); i++)
    {
        have+=min(a[i], mid);
        if(have>=t) return true;
    }
    return have>=t;    
}
int main()
{
    long long k, n;
    cin >> k;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long i = 0, j = 1e12, mid, res=0;
    while (i <= j) {
        mid = (i+j)/2;
        if (target(mid, a, k)) 
        {
            res=mid;
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