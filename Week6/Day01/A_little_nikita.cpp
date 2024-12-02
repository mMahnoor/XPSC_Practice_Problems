#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        if(n<m)
        {
            cout << "NO\n";
        }
        else if(n==m)
        {
            cout << "YES\n";
        }
        else{
            if((n-m)%2==0)
            {
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
    }
    return 0;
}