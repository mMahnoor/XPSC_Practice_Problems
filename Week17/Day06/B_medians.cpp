#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        if(n==1)
        {
            cout << 1 << "\n";
            cout << "1\n";
            continue;
        }
        if (k==1 || k==n)
        {
            cout << "-1\n";
            continue;
        }
        cout << "3\n";
        cout << "1 ";
        int l=k-1, r=k+1;
        if(l%2==0)
        {
            cout << l << " " << r+1; 
        }
        else cout << l+1 << " " << r;
        cout << "\n";
    }
    return 0;
}