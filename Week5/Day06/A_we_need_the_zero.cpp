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

        int a[n], total_XOR=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total_XOR ^= a[i];
        }
        if(n%2==0)
        {
            if(total_XOR==0)
            {
                cout << 3 << "\n";
            }
            else cout << -1 << "\n";
        }
        else{
            cout << total_XOR << "\n";
        }
        
    }
    return 0;
}