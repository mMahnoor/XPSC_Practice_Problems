// Problem link: https://codeforces.com/problemset/problem/1791/G1 
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, c;
        cin >> n >> c;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            a[i]=i+1+a[i];
        }
        sort(a, a+n);
        int max_cnt=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]>c) break;
            else{
                max_cnt++;
                c-=a[i];
            }
        }
        cout << max_cnt << "\n";
    } 
    return 0;
}