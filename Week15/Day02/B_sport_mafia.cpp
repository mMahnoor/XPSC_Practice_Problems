#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    long long i=0, j=n, res=0;
    while(i<=j)
    {
        long long mid = (i+j)/2;
        long long v = n-mid;
        if(mid*(mid+1)/2 - v <= k)
        {
            res=mid;
            i = mid+1;
        }
        else j = mid-1;
    }
    cout << n-res << "\n";
    return 0;
}