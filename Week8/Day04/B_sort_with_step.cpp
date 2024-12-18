#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], diff[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            diff[i]=abs(a[i]-(i+1));
        }
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            if(diff[i]%k!=0)
            {
                cnt++;
            }
        }
        if(cnt==0) cout << "0\n";
        else if(cnt==2) cout << "1\n";
        else cout << "-1\n";
    }
    return 0;
}