// Problem link: https://codeforces.com/problemset/problem/2049/C
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> res(n);
        int k=x, c=0;
        for (int i = 0; i < n; i++)
        {
            if(k>n)
            {
                res[k-n-1] = c;
            }
            else res[k-1]=c;
            c=1-c;
            k++;
        }
        if(n%2!=0 || abs(x-y)%2==0) res[x-1]=2;
        for (int i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}