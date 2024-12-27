#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        long long prefix_sum[n], suffix_sum[n], sum1=0, sum2=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0, j=n-1; i < n; i++, j--)
        {
            sum1+=a[i];
            sum2+=a[j];
            prefix_sum[i]=sum1;
            suffix_sum[j]=sum2;
        }
        long long maxS=1;
        for (int i = 0; i < n-1; i++)
        {
            maxS=max(maxS, __gcd(prefix_sum[i], suffix_sum[i+1]));
        }
        cout << maxS << "\n";
    }
    return 0;
}