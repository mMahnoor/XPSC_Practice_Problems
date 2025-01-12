#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool target(long long mid, vector<long long> a, int k)
{
    long long current_pos=a[0];
    k--;
    for (long long i = 1; i < a.size(); i++)
    {
        if(a[i]-current_pos>=mid)
        {
            k--;
            current_pos=a[i];
        }
        if(k==0) return true;
    }
    return false;
}

int main()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long i = 1, j = a.back()-a.front(), mid, res=0;
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