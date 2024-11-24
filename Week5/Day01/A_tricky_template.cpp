#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string a, b, c;
        cin >> a;
        cin >> b;
        cin >> c;
        if(a==c||b==c)
        {
            cout << "NO\n";
        }
        else
        {
            int flag=0;
            for (int i = 0; i < n; i++)
            {
                if(c[i]!=a[i] && c[i]!=b[i])
                {
                    flag=1;
                }
            }
            if(flag)
            {
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
    }
    return 0;
}