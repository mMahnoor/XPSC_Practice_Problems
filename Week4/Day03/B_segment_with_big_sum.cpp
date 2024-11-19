#include <iostream>
using namespace std;

int main()
{
    int n;
    long long s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i=0, j=0, min_length=INT_MAX;
    long long sum=0;
    while(j<n)
    {
        sum+=a[j];
        if(sum>=s)
        {
            while(sum>=s)
            {
                min_length=min(min_length, j-i+1);
                sum-=a[i];
                i++;
            }
        }
        j++;
    }
    if(min_length==INT_MAX) cout << -1 << "\n";
    else cout << min_length << "\n";
    return 0;
}