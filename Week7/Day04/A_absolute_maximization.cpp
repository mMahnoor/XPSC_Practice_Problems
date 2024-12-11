// Problem link: https://codeforces.com/problemset/problem/1763/A
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
        int max_elem=a[0], min_elem=a[0];
        for (int i = 1; i < n; i++)
        {
            max_elem |= a[i];
            min_elem &= a[i];       
        }
        cout << max_elem-min_elem << "\n";

    }
    return 0;
}