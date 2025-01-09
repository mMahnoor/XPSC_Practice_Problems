// Problem link: https://codeforces.com/problemset/problem/1926/E
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        long long j=1, ans;
        long long len=(n+((1<<j)/2))/(1<<j);
        j++;

        while(k-len>=1)
        {
            k-=len;
            len=(n+((1<<j)/2))/(1<<j);
            j++;
        }
        
        ans=((1<<(j-1-1)))*((2*(k))-1);
        cout << ans << "\n";
    }
    return 0;
}