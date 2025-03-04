#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, y;
        cin >> n;
        cin >> x >> y;
        int ans = n/min(x, y);
        cout << (n%min(x, y)==0 ? ans : ans+1) << "\n";
    }
    return 0;
}