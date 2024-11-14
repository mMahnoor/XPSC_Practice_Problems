// Problem link: https://codeforces.com/problemset/problem/1843/B
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i=0;
        long long max_op=0, max_sum=0;
        
        while(i<n)
        {
            if(a[i]<0)
            {
                max_op++;
                while(i<n && a[i]<=0)
                {
                    a[i]=abs(a[i]);
                    i++;
                }
            }
            else i++;
        }
        for (int i = 0; i < n; i++)
        {
            max_sum+=a[i];
        }
        cout << max_sum << " " << max_op << "\n";
    }
    return 0;
}