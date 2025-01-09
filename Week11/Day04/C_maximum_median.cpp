#include <iostream>
#include <algorithm>
using namespace std;

bool median(long long mid, int n, int a[], int k)
{
    long long op=0;
    for (int i = n/2; i < n; i++)
    {
        if(mid>a[i]) op+=(mid-a[i]);
    }
    return op<=k;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    long long i = 1, j = 2e9, mid, res=0;
    while (i <= j) {
        mid = i+(j-i)/2;
        if (median(mid, n, a, k)) {
            res = mid;
            i = mid+1;
        }
        else {
            j = mid-1;
        }
    }
    cout << res << "\n";
    return 0;
}