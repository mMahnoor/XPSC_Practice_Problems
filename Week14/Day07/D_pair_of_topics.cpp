#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), diff(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        diff[i]=a[i]-b[i];
    }
    sort(diff.begin(), diff.end());
    int i=0, j=n-1;
    long long cnt=0;
    while(i<j)
    {
        if(diff[i]+diff[j]>0)
        {
            cnt+=(j-i);
            j--;
        }
        else i++;
    }
    cout << cnt << "\n";
    return 0;
}