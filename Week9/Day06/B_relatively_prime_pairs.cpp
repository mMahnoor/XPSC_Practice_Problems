// Problem link: https://codeforces.com/problemset/problem/1051/B
#include <iostream>
using namespace std;

int main()
{
    long long l, r, n;
    cin >> l >> r;
    n=(r-l+1)/2;
    long long i=l, j=l+1;
    cout << "YES\n";
    for (int k = 1; k <= n; k++)
    {
        cout << i << " " << j << "\n";
        i+=2;
        j+=2;
    }
    
    return 0;
}