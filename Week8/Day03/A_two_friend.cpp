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
        int flag=0;
        for (int i = 0; i < n; i++)
        {
            if(a[a[i]-1]-1==i)
            {
                flag=1;
                break;
            }
        }
        if(flag) cout << 2 << "\n";
        else cout << 3 << "\n";
    }
}