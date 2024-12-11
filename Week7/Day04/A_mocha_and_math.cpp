// Problem link: https://codeforces.com/problemset/problem/1559/A
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
        int AND=a[0];
        for (int i = 1; i < n; i++)
        {
            AND &= a[i];
        }
        cout << AND << "\n";
    }
    return 0;
}