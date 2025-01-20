#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long minV=1e9+1, cnt=0, flag=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            minV=min(minV, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i]==minV) cnt++;
        }
        if(cnt>1)
        {
            for (int i = 0; i < n; i++)
            {
                if(a[i]%minV!=0)
                {
                    flag=1;
                    break;
                }
            }
        }
        else flag=1;
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}