// Problem link: https://codeforces.com/problemset/problem/1862/D
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool target(long long mid, long long n)
{
    long long res=(mid*(mid-1))/2;
    return res>n;   
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;

        long long i = 2, j = 1e10, mid, res=0;
        while (i <= j) {
            mid = (i+j)/2;
            if (target(mid, n)) 
            {
                j = mid-1;
            }
            else 
            {
                res=mid;
                i = mid+1;
            }
        } 
        cout << res+(n-((res*(res-1))/2)) << "\n";
    }
    return 0;
}