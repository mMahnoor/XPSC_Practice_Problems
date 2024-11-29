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
      
        if(n%2!=0 && n<=m)
        {
            cout << "YES\n";
            for (int i = 0; i < n-1; i++)
            {
                cout << 1 << " ";
                m--;
            }
            cout << m << "\n";
            
        }
        else if(n%2==0 && m%2==0 && n<=m)
        {
            cout << "YES\n";
            for (int i = 0; i < n-2; i++)
            {
                cout << 1 << " ";
                m--;
            }
            cout << m/2 << " " << m/2 << "\n";
            
        }
        else{
            cout << "NO\n";
        }

    }
    return 0;
}