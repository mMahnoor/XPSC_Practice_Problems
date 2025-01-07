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
        int k=0, flag=1;
        for (int i = 0; i < n; i++)
        {
            if(k<=a[i])
            {
                if(a[i]>=10 && a[i]<=99)
                {
                    int tens=a[i]/10, ones=a[i]%10;
                    if(tens>=k && ones>=tens)
                    {
                        k=ones;
                    }
                    else k=a[i];
                }
                else k=a[i];
            }
            else flag=0;
        }
        if(flag)
        {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    return 0;
}