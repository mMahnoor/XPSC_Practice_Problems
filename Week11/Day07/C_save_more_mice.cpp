// Problem link: https://codeforces.com/problemset/problem/1593/C
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> x(k);
        for (int i = 0; i < k; i++)
        {
            cin >> x[i];
        }
        sort(x.begin(), x.end());
        int cat=0, cnt=0;
        for (int i = k-1; i >= 0; i--)
        {
            if(n-cat > n-x[i]) 
            {
                cnt++;
                cat+=(n-x[i]);
            }
            else break;
        }
        cout << cnt << "\n";
    }
}