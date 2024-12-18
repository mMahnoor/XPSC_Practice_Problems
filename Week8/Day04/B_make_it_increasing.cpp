#include <iostream>
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
        long long minOp=0, flag=1;
        for (int i = n-1; i > 0; i--)
        {
            while(a[i]<=a[i-1])
            {
                a[i-1]/=2;
                minOp++;
                if(a[i-1]==0) break;
            }
            if(a[i]==a[i-1])
            {
                flag=0;
                break;
            }
        }
        if(flag) cout << minOp << "\n";
        else cout << "-1\n";
    }
    return 0;
}