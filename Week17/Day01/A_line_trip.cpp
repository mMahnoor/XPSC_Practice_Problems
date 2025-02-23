#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int maxD = a[0];
        for (int i = 1; i < n; i++)
        {
            maxD = max(maxD, a[i]-a[i-1]);
        }
        int d = 2*(x-a[n-1]);
        maxD = max(maxD, d);
        cout << maxD << "\n";
    }
    return 0;
}