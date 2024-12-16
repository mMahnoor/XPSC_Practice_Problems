#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        long long a[n];
        long long sum=0, total=n;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            sum+=a[i];
            total+=i;
        }
        vector<long long> v(n+1);
        long long missing = total-sum;
        v[0]=missing;
        for (long long i = 0; i < n; i++)
        {
            v[i+1]=a[i];
        }
        long long m=((k*n)+1)%(n+1);
        for (long long i = 0; i < n; i++)
        {
            if(m>n) m=0;
            cout << v[m] << " ";
            m++;
        }
        cout << "\n";
    }
    return 0;
}