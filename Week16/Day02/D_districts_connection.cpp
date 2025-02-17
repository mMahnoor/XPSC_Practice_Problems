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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int flag=0, d=a[0], x;
        for (int i = 1; i < n; i++)
        {
            if(d!=a[i])
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            cout << "YES\n";
            for (int i = 1; i < n; i++)
            {
                if(a[i]!=d)
                {
                    cout << 1 << " " << i+1 << "\n";
                    x=i+1;
                }
            }
            for (int i = 1; i < n; i++)
            {
                if(a[i]==d)
                {
                    cout << x << " " << i+1 << "\n";
                }
            }
        }
        else cout << "NO\n";
    }
    return 0;
}