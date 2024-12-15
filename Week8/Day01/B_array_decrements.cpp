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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int max_diff=0, flag=1;
        for (int i = 0; i < n; i++)
        {
            if(a[i]<b[i])
            {
                flag=0;
                break;
            }
            max_diff=max(max_diff, (a[i]-b[i]));
        }
        if(flag)
        {
            for (int i = 0; i < n; i++)
            {
                int diff = a[i]-b[i];
                if((b[i]!=0 && max_diff!=diff)||(b[i]==0 && diff>max_diff))
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}