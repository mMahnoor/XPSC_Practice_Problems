#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        long long cnt_leaf = (n*(n+1))/2;
        if(n>k)
        {
            cnt_leaf -= ((n-k)*(n-k+1))/2;
        }
        if(cnt_leaf%2==0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}