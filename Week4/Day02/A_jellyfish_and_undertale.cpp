// Problem link: https://codeforces.com/problemset/problem/1875/A
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long int a, b, n;
        cin >> a >> b >> n;
        long long int X[n];
        long long int sum=0, c=b;
        for (int i = 0; i < n; i++)
        {
            cin >> X[i];
        }
        sum+=c-1;
        c=1;
        for (int i = 0; i < n; i++)
        {
            c=min(c+X[i], a);
            sum+=c-1;
            c=1;
        }
        cout << sum+1 << "\n";
    } 
    return 0;
}